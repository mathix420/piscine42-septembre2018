/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julaurai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 17:51:33 by julaurai          #+#    #+#             */
/*   Updated: 2018/09/19 10:03:52 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

char	*ft_realloc(char *str, char *tmp)
{
	int		len;
	char	*new;

	if (str == NULL)
		return (ft_strdup(tmp));
	len = ft_strlen(str) + ft_strlen(tmp);
	if (!(new = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	new = ft_strcpy(new, str);
	new = ft_strcat(new, tmp);
	return (new);
}
