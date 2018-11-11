/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_processing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 08:33:13 by agissing          #+#    #+#             */
/*   Updated: 2018/09/09 22:25:55 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		**make_tab(void)
{
	int		**tab;
	int		i;

	i = 0;
	tab = (int**)malloc(9 * sizeof(int*));
	if (tab == NULL)
		return (NULL);
	while (i < 9)
	{
		tab[i] = (int*)malloc(9 * sizeof(int));
		if (tab[i] == NULL)
			return (NULL);
		i++;
	}
	return (tab);
}

int		**ft_tab(int c, char **v, int **tab)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (i < c)
	{
		j = 0;
		while (j < 9)
		{
			if (v[i][j] == '.')
				tab[i - 1][j] = 0;
			else if (v[i][j] >= '1' && v[i][j] <= '9')
				tab[i - 1][j] = v[i][j] - '0';
			j++;
		}
		i++;
	}
	return (tab);
}
