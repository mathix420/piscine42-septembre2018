/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 08:27:17 by agissing          #+#    #+#             */
/*   Updated: 2018/09/09 09:51:33 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		back_tr(int **tab, int pos)
{
	int		x;
	int		y;
	int		value;

	x = pos % 9;
	y = pos / 9;
	if (pos == 81)
		return (1);
	value = 1;
	if (tab[y][x] > 0)
		return (back_tr(tab, pos + 1));
	while (value <= 9)
	{
		tab[y][x] = value;
		if (ft_check(tab, x, y))
		{
			if (back_tr(tab, pos + 1))
				return (1);
		}
		tab[y][x] = 0;
		value++;
	}
	return (0);
}
