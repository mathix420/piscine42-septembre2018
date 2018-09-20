/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:59:30 by agissing          #+#    #+#             */
/*   Updated: 2018/09/06 21:16:38 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour <= 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour == 12)
			printf("%d.00 P.M. AND %d.00 P.M.\n", hour, 1);
		else if (hour == 11)
			printf("%d.00 A.M. AND %d.00 P.M.\n", 11, 12);
		else if (hour == 23)
			printf("%d.00 P.M. AND %d.00 A.M.\n", 11, 12);
		else if (hour == 0 || hour == 24)
			printf("%d.00 A.M. AND %d.00 A.M.\n", 12, 1);
		else if (hour >= 12 && hour < 24)
			printf("%d.00 P.M. AND %d.00 P.M.\n", hour % 12, hour % 12 + 1);
		else if (hour < 12 && hour >= 0)
			printf("%d.00 A.M. AND %d.00 A.M.\n", hour % 12, hour % 12 + 1);
	}
}
