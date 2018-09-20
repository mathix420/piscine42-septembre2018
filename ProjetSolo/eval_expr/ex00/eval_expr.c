/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 10:07:51 by agissing          #+#    #+#             */
/*   Updated: 2018/09/15 11:12:01 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define IS_OPE(x) (x == '+' || x == '-' || x == '/' || x == '*' || x == '%')

int			ft_isin(char c, char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

void	ft_calc(int (*f[5])(int, int), int a, int b, char *op)
{
	if (op[0] == '+')
		ft_putnbr(a + b);
	else if (op[0] == '-')
		ft_putnbr(a - b);
	else if (op[0] == '*')
		ft_putnbr(a * b);
	else if (op[0] == '/')
		ft_putnbr(a / b);
	else if (op[0] == '%')
		ft_putnbr(a % b);
}

int			eval_expr(char *str)
{
	int		i;
	int		out;
	int		c;
	char	nb[10];

	i = 0;
	out = 0;
	while (str[i])
	{
		if (str[i] == '(')
			out = eval_expr(str + i + 1);
		i++;
	}
	i = 0;
	while (str[i] != ')' && str[i])
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			nb[c] = str[i];
			c++;
			i++;
		}
		if (c > 0)
		{
			nb[c] = '\0';
			while ((str[i] >= 8 && str[i] <= 13) || str[i] == ' ')
				i++;
			return (ft_calc(atoi(nb), atoi(str + i + 1), str[i]));
		}
		i++;
	}
}
