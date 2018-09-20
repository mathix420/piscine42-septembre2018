/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 11:18:48 by agissing          #+#    #+#             */
/*   Updated: 2018/08/29 21:57:32 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	a;

	a = 0;
	while (a < 10000)
	{
		if ((a / 100) < (a % 100))
		{
			ft_putchar(a / 1000 + '0');
			ft_putchar(a / 100 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(a / 10 % 10 + '0');
			ft_putchar(a % 10 + '0');
			if (a != 9899)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		a++;
	}
}
