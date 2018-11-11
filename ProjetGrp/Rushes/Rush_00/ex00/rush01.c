/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaleba- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 10:06:49 by sbaleba-          #+#    #+#             */
/*   Updated: 2018/09/01 13:22:47 by sbaleba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_top(int x)
{
	int n;

	n = 1;
	if (x >= 1)
		ft_putchar('/');
	while (n < x - 1)
	{
		ft_putchar('*');
		n++;
	}
	if (x >= 2)
		ft_putchar('\\');
	if (x > 0)
		ft_putchar('\n');
}

void		ft_tail(int x)
{
	int p;

	p = 1;
	if (x >= 1)
		ft_putchar('\\');
	while (p < x - 1)
	{
		ft_putchar('*');
		p++;
	}
	if (x >= 2)
		ft_putchar('/');
	if (x > 0)
		ft_putchar('\n');
}

void		ft_middle(int x)
{
	int n;

	n = 1;
	if (x >= 1)
		ft_putchar('*');
	while (n < x - 1)
	{
		ft_putchar(' ');
		n++;
	}
	if (x >= 2)
		ft_putchar('*');
	if (x > 0)
		ft_putchar('\n');
}

void		rush(int x, int y)
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
