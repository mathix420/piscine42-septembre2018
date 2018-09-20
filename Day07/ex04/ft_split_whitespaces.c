/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 09:55:08 by agissing          #+#    #+#             */
/*   Updated: 2018/09/11 14:50:41 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define SPC(x) (x == ' ' || x == '\n' || x == '\t')

int			ft_count_words(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((SPC(str[i]) && !SPC(str[i + 1]) && str[i + 1])
			|| (i == 0 && !SPC(str[i])))
			j++;
		i++;
	}
	return (j);
}

char		**ft_init_tab(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_count_words(str) + 1))))
		return (NULL);
	while (str[i])
	{
		while (SPC(str[i]) && str[i])
			i++;
		k = i;
		while (!SPC(str[i]) && str[i])
			i++;
		if (i > k)
		{
			if (!(tab[j] = (char*)malloc(sizeof(char) * (i - k + 1))))
				return (NULL);
			j++;
		}
	}
	return (tab);
}

void		ft_fill_tab(char *str, char **tab)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	while (SPC(str[i]))
		i++;
	while (str[i])
	{
		while (!SPC(str[i]) && str[i])
		{
			tab[x][y] = str[i];
			tab[x][y + 1] = '\0';
			i++;
			y++;
		}
		if (y != 0)
			x++;
		y = 0;
		i += (str[i] ? 1 : 0);
	}
	tab[x] = 0;
}

char		**ft_split_whitespaces(char *str)
{
	char	**tab;

	tab = ft_init_tab(str);
	ft_fill_tab(str, tab);
	return (tab);
}
