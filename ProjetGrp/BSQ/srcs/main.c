/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 11:02:50 by agissing          #+#    #+#             */
/*   Updated: 2018/09/18 20:54:04 by julaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int		main(int c, char **v)
{
	int		i;

	i = 0;
	if (c > 1)
		while (++i < c)
		{
			if (!ft_read(v[i]))
				ft_error("map error\n");
			if (c > 2 && i < c - 1)
				ft_putchar('\n');
		}
	else
	{
		if (!ft_read_stdin())
			ft_error("map error\n");
	}
	return (0);
}
