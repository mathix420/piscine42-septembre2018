/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:34:19 by agissing          #+#    #+#             */
/*   Updated: 2018/09/13 14:42:24 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*new;
	int		i;

	i = 0;
	if (!(new = malloc(sizeof(int) * length)))
		return (tab);
	while (i < length)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return (new);
}
