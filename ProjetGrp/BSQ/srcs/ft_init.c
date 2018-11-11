/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:42:10 by agissing          #+#    #+#             */
/*   Updated: 2018/09/18 20:53:04 by julaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

t_map		ft_new_map(char *path)
{
	t_map	map;

	map.nb_lin = 0;
	map.nb_col = 0;
	map.size_meta = 0;
	map.c_blank = 0;
	map.c_obs = 0;
	map.c_fill = 0;
	map.path = path;
	return (map);
}
