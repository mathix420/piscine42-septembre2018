/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:57:43 by agissing          #+#    #+#             */
/*   Updated: 2018/09/16 20:45:02 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		main(void)
{
	t_list	*list;
	t_char	*elem;
	t_char	*last;
	char	c;

	if (!(list = malloc(sizeof(t_list))))
		return (0);
	list->first = NULL;
	while ((read(0, &c, 1)))
	{
		if (!(elem = malloc(sizeof(t_char))))
			return (0);
		elem->c = c;
		elem->next = NULL;
		if (!list->first)
			list->first = elem;
		else
			last->next = elem;
		last = elem;
	}
	ft_print_result(list);
	return (0);
}
