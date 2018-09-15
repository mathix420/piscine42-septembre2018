/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:57:43 by agissing          #+#    #+#             */
/*   Updated: 2018/09/15 16:26:41 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "rush02.h"
#define BUFF_SIZ 4096

int		ft_strlen(char *str)
{
	int	 i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	print(t_list *list)
{
	t_char	*elem;

	elem = list->first;
	while (elem->next)
	{
		printf("%c", elem->c);
		elem = elem->next;
	}
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
		if (h == 0 && l == 0)// tout premier caractere
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
	print(list);
	printf("hauteur :: %d; largeur :: %d\n", h, l);
	c = 0;
	h = 0;
	l = 0;
	while ((read(0, &c, 1)))
	{
		if (c == '\n')
			h++;
		if (h == 0)
			l++;
	}
	printf("hauteur :: %d; largeur :: %d\n", h, l);
	return (0);
}
