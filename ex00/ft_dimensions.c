/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dimensions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plungu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:57:30 by plungu            #+#    #+#             */
/*   Updated: 2018/09/15 17:20:13 by plungu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "RUSH02_H"

struct	s_dim	ft_dimensions(t_list *list)
{
	t_dim	dim;
	t_char	*elem;

	elem = list->first;
	if (!(dim = malloc(sizeof(dim))))
		return (0);
	dim.x = 0;
	dim.y = 0;

	while (elem->next)
		{
			while (elem->c != '\n' && dim.y == 0)
				dim.x++;
			if (elem->c == '\n')
				dim.y++;
			elem = elem->next;
		}
	return (dim);
}
