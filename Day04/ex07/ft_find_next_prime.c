/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 15:37:07 by agissing          #+#    #+#             */
/*   Updated: 2018/09/03 13:46:24 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	else
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (is_prime(nb))
			return (nb);
		nb++;
	}
}
