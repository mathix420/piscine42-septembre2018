/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 21:43:04 by agissing          #+#    #+#             */
/*   Updated: 2018/09/06 21:48:17 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_antidote(int i, int j, int k)
{
	if (i > j && j > k)
		return (j);
	if (j > i && i > k)
		return (i);
	if (k > i && k > j)
		return (k);
	if (i == j && j > k)
		return (k);
	if (k == j && k > i)
		return (i);
	if (i == j && k == j)
		return (j);
}
