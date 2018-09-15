/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:57:43 by agissing          #+#    #+#             */
/*   Updated: 2018/09/15 20:31:44 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "rush02.h"
#define BUFF_SIZ 4096

void    ft_print_result(t_list *list);
t_dim	*ft_dimensions(t_list *list);

void	print(t_list *list)
{
	t_char	*elem;
	
	elem = list->first;
	while (elem->next)
	{
		printf("%c", elem->c);
		elem = elem->next;
	}
	printf("%c", elem->c);
}

int		main(void)
{
	t_list	*list;
	t_char	*elem;
	t_char	*new;
	t_char	*last;
	char	c;
	int		h;
	int		l;

	if (!(list = malloc(sizeof(t_list))))
		return (0);
	if (!(elem = malloc(sizeof(t_char))))
		return (0);
	c = 0;
	h = 0;
	l = 0;
	while ((read(0, &c, 1)))
	{
		if (c == '\n')
			h++;
		if (h == 0 && l == 0)
		{
			elem->c = c;
			elem->next = NULL;
			list->first = elem;
			last = elem;
		}
		else 
		{
			if (!(new = malloc(sizeof(t_char))))
				return (0);
			new->c = c;
			new->next = NULL;
			last->next = new;
			last = new;
		}
		if (h == 0)
			l++;
	}
	ft_print_result(list);
	return (0);
}
