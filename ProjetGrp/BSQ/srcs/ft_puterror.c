/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julaurai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 16:27:26 by julaurai          #+#    #+#             */
/*   Updated: 2018/09/19 16:44:36 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

void	ft_puterror(char c)
{
	write(2, &c, 1);
}

void	ft_error(char *error)
{
	int i;

	i = 0;
	while (error[i])
	{
		ft_puterror(error[i]);
		i++;
	}
}
