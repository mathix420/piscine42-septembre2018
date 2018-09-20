/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 13:58:05 by agissing          #+#    #+#             */
/*   Updated: 2018/09/03 13:47:39 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	out;

	out = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else if (nb > 12)
		return (0);
	else
		while (nb >= 1)
		{
			out *= nb;
			nb--;
		}
	return (out);
}
