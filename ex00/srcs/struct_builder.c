/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 18:22:47 by agissing          #+#    #+#             */
/*   Updated: 2018/09/15 21:38:45 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_char		*ft_add_node(t_list *list, t_char *last, char c)
{
	t_char	*elem;

	if (!(elem = malloc(sizeof(t_char))))
		return (NULL);
	elem->c = c;
	elem->next = NULL;
	if (!list->first)
		list->first = elem;
	else
		last->next = elem;
	return (elem);
}

t_char		*ft_new(t_list *list, t_char *last, int x, char *v)
{
	int n;

	n = 1;
	if (x >= 1)
		last = ft_add_node(list, last, v[0]);
	while (n < x - 1)
	{
		last = ft_add_node(list, last, v[1]);
		n++;
	}
	if (x >= 2)
		last = ft_add_node(list, last, v[2]);
	if (x > 0)
		last = ft_add_node(list, last, v[3]);
	return (last);
}
