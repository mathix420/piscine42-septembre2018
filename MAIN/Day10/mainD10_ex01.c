/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 17:57:18 by agissing          #+#    #+#             */
/*   Updated: 2018/09/13 18:02:31 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void		ft_foreach(int *tab, int length, void (*f)(int));

void		ft_putnbr(int  i)
{
	printf("%d\n", i);
}

int			main(void)
{
	int		*tab = malloc(sizeof(int) * 5);
	tab[0] = 5;
	tab[1] = 3;
	tab[2] = 0;
	tab[3] = 1;
	tab[4] = 2;
	ft_foreach(tab, 5, &ft_putnbr);
	return (0);
}
