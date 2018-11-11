/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 19:50:38 by agissing          #+#    #+#             */
/*   Updated: 2018/09/16 20:19:05 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_comp(t_list *list, t_list *ref)
{
	t_char	*elem;
	t_char	*e_ref;

	if (list->first)
		elem = list->first;
	if (ref->first)
		e_ref = ref->first;
	if ((!ref->first && list->first) || (ref->first && !list->first))
		return (0);
	while (elem->next && e_ref->next)
	{
		if (elem->c != e_ref->c)
			return (0);
		elem = elem->next;
		e_ref = e_ref->next;
	}
	if ((elem->c != e_ref->c) || (!e_ref->next && elem->next)
		|| (e_ref->next && !elem->next))
		return (0);
	else
		return (1);
}

void	ft_printf(int i, int x, int y, int count)
{
	if (count != 0)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	ft_print_result(t_list *list)
{
	t_dim	*dim;
	int		x;
	int		y;
	int		count;

	count = 0;
	if (!(dim = ft_dimensions(list)))
		return ;
	x = dim->x;
	y = dim->y;
	if (ft_comp(list, rush_00(x, y)))
		ft_printf(0, x, y, count++);
	if (ft_comp(list, rush_01(x, y)))
		ft_printf(1, x, y, count++);
	if (ft_comp(list, rush_02(x, y)))
		ft_printf(2, x, y, count++);
	if (ft_comp(list, rush_03(x, y)))
		ft_printf(3, x, y, count++);
	if (ft_comp(list, rush_04(x, y)))
		ft_printf(4, x, y, count++);
	if (count == 0)
		ft_putstr("aucune");
	ft_putstr("\n");
}
