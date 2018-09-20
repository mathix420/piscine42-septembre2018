/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:30:09 by agissing          #+#    #+#             */
/*   Updated: 2018/09/07 15:14:09 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	i = min;
	tab = (int*)malloc(sizeof(int) * (max - min));
	*range = (int*)malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		tab[i - min] = i;
		i++;
	}
	*range = tab;
	return (max - min);
}
