/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_storage.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:49:55 by agissing          #+#    #+#             */
/*   Updated: 2018/09/19 22:59:33 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int		ft_storage(int fd, t_map *map)
{
	char	*str_map;
	char	*sav_map;
	char	*meta;
	int		tab_size;

	tab_size = (map->nb_col + 1) * map->nb_lin + 2;
	if (!(str_map = (char*)malloc(sizeof(char) * tab_size)))
		return (0);
	if (!(sav_map = (char*)malloc(sizeof(char) * tab_size)))
		return (0);
	if (!(meta = (char*)malloc(sizeof(char) * (map->size_meta + 1))))
		return (0);
	read(fd, meta, map->size_meta + 1);
	if (!(read(fd, str_map, tab_size)))
		return (0);
	str_map[tab_size - 1] = '\0';
	sav_map = str_map;
	return (ft_perform_result(str_map, map, sav_map));
}

int		ft_perform_result(char *str_map, t_map *map, char *sav_map)
{
	t_pos	pos;
	int		*tab;

	if (!(tab = ft_get_tab(map, sav_map)))
		return (0);
	pos = ft_get_max(tab, *map);
	ft_print_result(str_map, *map, pos);
	return (1);
}

void	ft_print_result(char *str_map, t_map map, t_pos pos)
{
	int		i;
	int		siz;
	int		xi;
	int		yi;

	i = 0;
	siz = (map.nb_col + 1) * map.nb_lin;
	while (i < siz)
	{
		xi = i % (map.nb_col + 1);
		yi = i / (map.nb_col + 1);
		if (yi > (pos.y - pos.max) && yi <= pos.y
			&& xi > (pos.x - pos.max) && xi <= pos.x)
			ft_putchar(map.c_fill);
		else
			ft_putchar(str_map[i]);
		i++;
	}
}

t_pos	ft_get_max(int *tab, t_map map)
{
	t_pos	pos;
	int		i;
	int		max;

	i = 0;
	max = (map.nb_col * map.nb_lin);
	pos.max = 0;
	pos.y = 0;
	pos.x = 0;
	while (i < max)
	{
		if (pos.max < tab[i])
		{
			pos.x = i % map.nb_col;
			pos.y = i / map.nb_col;
			pos.max = tab[i];
		}
		i++;
	}
	return (pos);
}

int		*ft_get_tab(t_map *map, char *str)
{
	int i;
	int	j;
	int	*tab;

	i = 0;
	j = 0;
	if (!(tab = malloc(sizeof(int) * map->nb_lin * map->nb_col)))
		return (NULL);
	while (str[i])
	{
		if (str[i] != '\n')
		{
			if (str[i] == map->c_blank)
			{
				tab[j] = ft_get_min(j, *map, tab);
				j++;
			}
			else if (str[i] == map->c_obs)
				tab[j++] = 0;
		}
		i++;
	}
	return (tab);
}
