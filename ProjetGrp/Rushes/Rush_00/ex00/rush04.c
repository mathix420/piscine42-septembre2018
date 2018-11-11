/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 19:42:36 by agissing          #+#    #+#             */
/*   Updated: 2018/09/02 19:42:49 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_top(int x)
{
	int n;

	n = 1;
	if (x >= 1)
		ft_putchar('A');
	while (n < x - 1)
	{
		ft_putchar('B');
		n++;
	}
	if (x >= 2)
		ft_putchar('C');
	if (x > 0)
		ft_putchar('\n');
}

void	ft_tail(int x)
{
	int p;

	p = 1;
	if (x >= 1)
		ft_putchar('C');
	while (p < x - 1)
	{
		ft_putchar('B');
		p++;
	}
	if (x >= 2)
		ft_putchar('A');
	if (x > 0)
		ft_putchar('\n');
}

void	ft_middle(int x)
{
	int n;

	n = 1;
	if (x >= 1)
		ft_putchar('B');
	while (n < x - 1)
	{
		ft_putchar(' ');
		n++;
	}
	if (x >= 2)
		ft_putchar('B');
	if (x > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int n;

	n = 1;
	if (y >= 1)
		ft_top(x);
	while (n < y - 1)
	{
		ft_middle(x);
		n++;
	}
	if (y >= 2)
		ft_tail(x);
}
