/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 19:35:50 by agissing          #+#    #+#             */
/*   Updated: 2018/09/18 13:00:39 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define IS_OPE(x) (x == '+' || x == '-' || x == '/' || x == '*' || x == '%')

#include <unistd.h>

int		ft_sum(int a, int b);
int		ft_sub(int a, int b);
int		ft_mul(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);

int		ft_atoi(char *str)
{
	unsigned int	nbr;
	int				sign;
	int				i;

	i = 0;
	nbr = 0;
	sign = 1;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = (str[i++] == '-' ? -1 : 1);
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + str[i++] - '0';
	return (nbr * sign);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;
	char			c;

	c = '0';
	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
}

void	ft_calc(int (*f[5])(int, int), int a, int b, char *op)
{
	if (op[0] == '+')
		ft_putnbr(f[0](a, b));
	else if (op[0] == '-')
		ft_putnbr(f[1](a, b));
	else if (op[0] == '*')
		ft_putnbr(f[2](a, b));
	else if (op[0] == '/' && b != 0)
		ft_putnbr(f[3](a, b));
	else if (op[0] == '/' && b == 0)
		write(1, "Stop : division by zero", 23);
	else if (op[0] == '%' && b != 0)
		ft_putnbr(f[4](a, b));
	else if (op[0] == '%' && b == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		write(1, "0", 1);
}

int		main(int c, char **v)
{
	int		i;
	int		(*f[5])(int, int) = {
		&ft_sum,
		&ft_sub,
		&ft_mul,
		&ft_div,
		&ft_mod,
	};

	i = 0;
	if (c != 4)
		return (0);
	while (v[2][i])
		i++;
	if (!IS_OPE(v[2][0]) || i != 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	ft_calc(f, ft_atoi(v[1]), ft_atoi(v[3]), v[2]);
	write(1, "\n", 1);
	return (0);
}
