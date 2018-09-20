/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_calc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 11:24:46 by agissing          #+#    #+#             */
/*   Updated: 2018/09/15 13:53:29 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define SPC(x) ((*str >= 8 && *str <= 13) || *str == ' ')
#define IS_OPE(x) (x == '+' || x == '-' || x == '/' || x == '*' || x == '%')

int		ft_atoi(char *str);

int		ft_doop(int a, int b, char op)
{
	if (op == '+')
		return (a + b);
	else if (op == '-')
		return (a - b);
	else if (op == '*')
		return (a * b);
	else if (op == '/')
		return (a / b);
	else if (op == '%')
		return (a % b);
	return (0);
}

int		start_nb(char *str)
{
	while (SPC(*str))
		str++;
	if (*str >= '0' && *str <= '9')
		return (1);
	else if (*str == '-' || *str == '+')
	{
		str++;
		if (*str >= '0' && *str <= '9')
			return (1);
	}
	return (0);
}

int		ft_is_nleft_op(char *str)
{
	while (*str)
	{
		if (IS_OPE(*str))
			return (0);
		str++;
	}
	return (1);
}

int		ft_calc(char *str)
{
	int		a;
	int		b;
	char	op;

	while (SPC(*str))
		str++;
	a = ft_atoi(str);
	while (!SPC(*str))
		str++;
	while (SPC(*str))
		str++;
	op = *str;
	while (!SPC(*str))
		str++;
	while (SPC(*str))
		str++;
	if (ft_is_nleft_op(str))
		b = ft_atoi(str);
	else
		b = ft_calc(str);
	while (!SPC(*str))
		str++;
	while (SPC(*str))
		str++;
	return (ft_doop(a, b, op));
}

int		main(int c, char **v)
{
	(void)c;
	printf("%d\n", ft_calc(0, v[1]));
	return (0);
}
