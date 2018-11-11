/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julaurai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 11:07:14 by julaurai          #+#    #+#             */
/*   Updated: 2018/09/19 16:22:17 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int		ft_read(char *path)
{
	int		fd;
	t_map	map;

	map = ft_new_map(path);
	if (!(fd = open(path, O_RDONLY)))
		return (0);
	if (!check_first_line(fd, &map) || map.nb_lin == 0
		|| map.c_blank == map.c_obs || map.c_fill == map.c_obs
		|| map.c_blank == map.c_fill)
		return (0);
	if (!count_char(fd, &map) || map.nb_col == 0)
		return (0);
	close(fd);
	if (!(fd = open(path, O_RDONLY)))
		return (0);
	if (!ft_storage(fd, &map))
		return (0);
	close(fd);
	return (1);
}

int		ft_is_valid(char c, t_map *map)
{
	if (map->c_obs != c && map->c_blank != c)
		return (0);
	return (1);
}

int		check_first_line(int fd, t_map *map)
{
	char	buf;
	char	*f_line;
	int		i;

	buf = 0;
	i = 0;
	if (!(f_line = (char*)malloc(sizeof(char) * 16)))
		return (0);
	while ((read(fd, &buf, BUFFSIZE)))
		if (buf)
		{
			if (buf != '\n')
				f_line[i++] = buf;
			else if (buf == '\n')
			{
				f_line[i++] = '\n';
				f_line[i] = '\0';
				return (ft_process_data(map, f_line));
			}
		}
		else
			return (0);
	return (1);
}

int		ft_process_data(t_map *map, char *str)
{
	int		l_str;

	l_str = ft_strlen_revenge(str);
	map->size_meta = l_str;
	if (l_str >= 4)
	{
		map->c_blank = str[l_str - 3];
		map->c_obs = str[l_str - 2];
		map->c_fill = str[l_str - 1];
		str[l_str - 3] = '\0';
		map->nb_lin = ft_atoi(str);
		return (1);
	}
	return (0);
}

int		count_char(int fd, t_map *map)
{
	int		nbr_car;
	int		nbr_line;
	char	buf;

	buf = 0;
	nbr_line = 0;
	nbr_car = 0;
	while (read(fd, &buf, BUFFSIZE))
	{
		nbr_car++;
		if (!ft_is_valid(buf, map) && buf != '\n')
			return (0);
		if (buf == '\n')
		{
			if (nbr_line == 0)
				map->nb_col = nbr_car - 1;
			else if (nbr_car - 1 != map->nb_col)
				return (0);
			nbr_car = 0;
			nbr_line++;
		}
	}
	if (nbr_line != map->nb_lin)
		return (0);
	return (1);
}
