/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:37:33 by agissing          #+#    #+#             */
/*   Updated: 2018/09/11 14:08:54 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strdup(char *src)
{
	unsigned int	i;
	unsigned int	l_src;
	char			*out;

	i = 0;
	l_src = ft_strlen(src);
	out = malloc(sizeof(*out) * (l_src + 1));
	while (i < l_src)
	{
		out[i] = src[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
