/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 14:02:44 by agissing          #+#    #+#             */
/*   Updated: 2018/09/09 22:38:32 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_print(int **tab)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			c = tab[i][j] + '0';
			write(1, &c, 1);
			if (j < 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_ch_ar(char **v)
{
	int		i;

	i = 1;
	while (i < 10)
	{
		if (ft_strlen(v[i]) != 9)
			return (0);
		i++;
	}
	return (1);
}

int		main(int c, char **v)
{
	int		**tab;
	int		**tab_verif;

	tab = make_tab();
	tab_verif = make_tab();
	if (c != 10 || tab == NULL || tab_verif == NULL || !ft_check_arg(c, v)
		|| !ft_ch_ar(v))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	tab = ft_tab(c, v, tab);
	back_tr(tab, 0);
	tab_verif = ft_tab(c, v, tab_verif);
	ft_turn_table(tab_verif);
	back_tr(tab_verif, 0);
	ft_turn_table(tab_verif);
	if (is_same(tab, tab_verif))
		ft_print(tab);
	else
		write(1, "Error\n", 6);
	return (0);
}
