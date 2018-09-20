/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 18:58:36 by agissing          #+#    #+#             */
/*   Updated: 2018/09/20 18:58:41 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

void	ft_putstr_e(char *str)
{
	while (*str)
		ft_putchar_e(*(str++));
}

int		error_str(int w)
{
	if (w == 0)
	{
		ft_putstr_e("tail: option requires an argument -- c\n");
		ft_putstr_e("usage: tail [-F | -f | -r] [-q] [-b # ");
		ft_putstr_e("| -c # | -n #] [file ...]\n");
	}
	if (w == 1)
		ft_putstr_e("tail: illegal offset -- ok\n");
	return (1);
}
