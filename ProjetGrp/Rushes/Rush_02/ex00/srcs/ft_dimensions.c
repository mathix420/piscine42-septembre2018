/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dimensions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plungu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:57:30 by plungu            #+#    #+#             */
/*   Updated: 2018/09/16 20:17:35 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_dim	*ft_dimensions(t_list *list)
{
	t_dim	*dim;
	t_char	*elem;

	if (!(elem = malloc(sizeof(t_char))))
		return (NULL);
	if (!(elem = list->first))
	{
		ft_putstr("aucune\n");
		return (NULL);
	}
	if (!(dim = malloc(sizeof(t_dim))))
		return (NULL);
	dim->x = 0;
	dim->y = 0;
	while (elem->next)
	{
		if (elem->c != '\n' && dim->y == 0)
			dim->x++;
		if (elem->c == '\n')
			dim->y++;
		elem = elem->next;
	}
	if (elem->c == '\n')
		dim->y++;
	return (dim);
}
