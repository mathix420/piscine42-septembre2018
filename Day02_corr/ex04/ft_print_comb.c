/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 09:49:06 by agissing          #+#    #+#             */
/*   Updated: 2018/08/29 21:32:09 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int	i;
	int	a;
	int	b;
	int	c;

	i = 0;
	while (i <= 789)
	{
		a = i / 100;
		b = i % 100 / 10;
		c = i % 10;
		if (a < b && b < c && a < c)
		{
			ft_putchar(a + '0');
			ft_putchar(b + '0');
			ft_putchar(c + '0');
			if (i != 789)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		i++;
	}
}
