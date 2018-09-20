/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:50:32 by agissing          #+#    #+#             */
/*   Updated: 2018/09/11 14:12:02 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
		return (NULL);
	i = min;
	tab = (int*)malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		tab[i - min] = i;
		i++;
	}
	return (tab);
}
