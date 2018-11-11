/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:38:47 by agissing          #+#    #+#             */
/*   Updated: 2018/09/18 21:19:10 by julaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int		ft_get_min(int pos, t_map map, int *tab)
{
	int		min;
	int		out;

	if (pos < map.nb_col)
		return (1);
	if (pos % map.nb_col == 0)
		return (1);
	out = tab[pos - 1] + 1;
	min = tab[pos - 1];
	if (tab[pos - map.nb_col] < min)
	{
		out = tab[pos - map.nb_col] + 1;
		min = tab[pos - map.nb_col];
	}
	if (tab[pos - map.nb_col - 1] < min)
	{
		out = tab[pos - map.nb_col - 1] + 1;
		min = tab[pos - map.nb_col - 1];
	}
	return (out);
}
