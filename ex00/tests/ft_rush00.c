/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 18:23:55 by agissing          #+#    #+#             */
/*   Updated: 2018/09/15 18:29:12 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdlib.h>
#include <stdio.h>

void		print(t_list *list);
t_char		*ft_add_node(t_list *list, t_char *last, char c);
t_char		*ft_new(t_list *list, t_char *last, int x, char *v);

t_list		*rush_00(int x, int y)
{
	t_list	*list;
	t_char	*last;
	int n;
	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	if (!(last = malloc(sizeof(t_char))))
		return (NULL);
	list->first = NULL;
	n = 1;
	if (y >= 1)
		last = ft_new(list, last, x, "o-o\n");
	while (n < y - 1)
	{
		last =ft_new(list, last, x, "| |\n");
		n++;
	}
	if (y >= 2)
		last = ft_new(list, last, x, "o-o\n");
	return (list);
}

t_list		*rush_01(int x, int y)
{
	t_list	*list;
	t_char	*last;
	int n;
	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	if (!(last = malloc(sizeof(t_char))))
		return (NULL);
	list->first = NULL;
	n = 1;
	if (y >= 1)
		last = ft_new(list, last, x, "/*\\\n");
	while (n < y - 1)
	{
		last =ft_new(list, last, x, "* *\n");
		n++;
	}
	if (y >= 2)
		last = ft_new(list, last, x, "\\*/\n");
	return (list);
}

t_list		*rush_02(int x, int y)
{
	t_list	*list;
	t_char	*last;
	int n;
	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	if (!(last = malloc(sizeof(t_char))))
		return (NULL);
	list->first = NULL;
	n = 1;
	if (y >= 1)
		last = ft_new(list, last, x, "ABA\n");
	while (n < y - 1)
	{
		last =ft_new(list, last, x, "B B\n");
		n++;
	}
	if (y >= 2)
		last = ft_new(list, last, x, "CBC\n");
	return (list);
}

t_list		*rush_03(int x, int y)
{
	t_list	*list;
	t_char	*last;
	int n;
	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	if (!(last = malloc(sizeof(t_char))))
		return (NULL);
	list->first = NULL;
	n = 1;
	if (y >= 1)
		last = ft_new(list, last, x, "ABC\n");
	while (n < y - 1)
	{
		last =ft_new(list, last, x, "B B\n");
		n++;
	}
	if (y >= 2)
		last = ft_new(list, last, x, "ABC\n");
	return (list);
}

t_list		*rush_04(int x, int y)
{
	t_list	*list;
	t_char	*last;
	int n;
	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	if (!(last = malloc(sizeof(t_char))))
		return (NULL);
	list->first = NULL;
	n = 1;
	if (y >= 1)
		last = ft_new(list, last, x, "ABC\n");
	while (n < y - 1)
	{
		last =ft_new(list, last, x, "B B\n");
		n++;
	}
	if (y >= 2)
		last = ft_new(list, last, x, "CBA\n");
	return (list);
}
