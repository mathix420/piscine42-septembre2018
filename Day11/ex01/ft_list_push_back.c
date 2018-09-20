/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 22:02:19 by agissing          #+#    #+#             */
/*   Updated: 2018/09/12 22:13:13 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			ft_create_elem(void	*data);

void			ft_list_push_back(t_list **begin_list, void *data)
{
	int		i;
	t_list	item;

	i = 0;
	item = ft_create_elem(data);
	while (begin_list[i].next)
		i++;
	begin_list[i].next = item;
	begin_list[i + 1] = item;
}
