/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:12:20 by agissing          #+#    #+#             */
/*   Updated: 2018/09/12 14:24:48 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_par	*ft_param_to_tab(int c, char **av)
{
	t_stock_par		*stock;
	int				i;
	int				j;

	i = 0;
	stock = malloc(sizeof(t_stock_par) * (c + 1));
	while (i < c)
	{
		stock[i].size_param = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = malloc(sizeof(char) * (stock[i].size_param + 1));
		j = 0;
		while (av[i][j])
		{
			stock[i].copy[j] = av[i][j];
			j++;
		}
		stock[i].copy[j] = '\0';
		stock[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
