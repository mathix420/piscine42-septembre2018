/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 09:28:00 by agissing          #+#    #+#             */
/*   Updated: 2018/09/07 09:30:38 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_collatz_conjecture(unsigned int base)
{
	if (base > 1 && base % 2 == 0)
		return (ft_collatz_conjecture(base / 2));
	if (base > 1 && base % 2 != 0)
		return (ft_collatz_conjecture(base * 3) + 1);
}
