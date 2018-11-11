/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 08:29:46 by agissing          #+#    #+#             */
/*   Updated: 2018/09/09 22:24:40 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_check_arg(int c, char **v)
{
	int		i;
	int		j;

	i = 1;
	while (i < c)
	{
		j = 0;
		while (v[i][j])
		{
			if (!(v[i][j] >= '1' && v[i][j] <= '9') && v[i][j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_square_check(int **tab, int x, int y)
{
	int		i;
	int		j;

	j = (x / 3) * 3;
	while (j < (x / 3) * 3 + 3)
	{
		i = (y / 3) * 3;
		while (i < (y / 3) * 3 + 3)
		{
			if (tab[i][j] == tab[y][x] && (x != j || y != i))
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

int		ft_check(int **tab, int x, int y)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (tab[y][x] == tab[y][i] && i != x)
			return (0);
		i++;
	}
	i = 0;
	while (i < 9)
	{
		if (tab[i][x] == tab[y][x] && i != y)
			return (0);
		i++;
	}
	return (ft_square_check(tab, x, y));
}

int		is_same(int **tab, int **verif)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[i][j] != verif[i][j] || tab[i][j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
