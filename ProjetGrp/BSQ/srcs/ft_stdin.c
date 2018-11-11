/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 18:12:21 by agissing          #+#    #+#             */
/*   Updated: 2018/09/19 17:35:43 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int		ft_read_stdin(void)
{
	t_map	map;
	char	*str;
	char	*tmp;
	int		rd;

	str = NULL;
	map = ft_new_map("");
	if (!(tmp = (char*)malloc(sizeof(char) * (BUFFINSIZE + 1))))
		return (0);
	while ((rd = read(0, tmp, BUFFINSIZE)) > 0)
	{
		tmp[rd] = '\0';
		if (!(str = ft_realloc(str, tmp)))
			return (0);
	}
	if (!str)
		return (0);
	else
	{
		if (!ft_checkup_in(&map, str))
			return (0);
	}
	free(str);
	free(tmp);
	return (1);
}

int		ft_checkup_in(t_map *map, char *str)
{
	int		offset;

	offset = ft_process_in(map, ft_strdup(str)) + 1;
	if (offset == 1 || map->nb_lin == 0 || map->c_blank == map->c_obs ||
		map->c_fill == map->c_obs || map->c_blank == map->c_fill)
		return (0);
	if (!ft_count_char_in(str + offset, map) || map->nb_col == 0)
		return (0);
	if (!ft_storage_in(str + offset, map))
		return (0);
	return (1);
}

int		ft_process_in(t_map *map, char *str)
{
	int	l_str;

	l_str = ft_strlen_revenge(str);
	map->size_meta = l_str;
	if (l_str >= 4)
	{
		map->c_blank = str[l_str - 3];
		map->c_obs = str[l_str - 2];
		map->c_fill = str[l_str - 1];
		str[l_str - 3] = '\0';
		map->nb_lin = ft_atoi(str);
		return (l_str);
	}
	return (0);
}

int		ft_count_char_in(char *str, t_map *map)
{
	int	nbr_car;
	int	nbr_line;

	nbr_line = 0;
	nbr_car = 0;
	while (*str)
	{
		nbr_car++;
		if (!ft_is_valid(*str, map) && *str != '\n')
			return (0);
		if (*str == '\n')
		{
			if (nbr_line == 0)
				map->nb_col = nbr_car - 1;
			else if (nbr_car - 1 != map->nb_col)
				return (0);
			nbr_car = 0;
			nbr_line++;
		}
		str++;
	}
	if (nbr_line != map->nb_lin)
		return (0);
	return (1);
}

int		ft_storage_in(char *str_map, t_map *map)
{
	int		tab_size;
	char	*sav_map;
	t_pos	pos;
	int		*tab;

	tab_size = (map->nb_col + 1) * map->nb_lin + 2;
	if (!(sav_map = (char*)malloc(sizeof(char) * tab_size)))
		return (0);
	sav_map = str_map;
	if (!(tab = ft_get_tab(map, sav_map)))
		return (0);
	pos = ft_get_max(tab, *map);
	ft_print_result(str_map, *map, pos);
	return (1);
}
