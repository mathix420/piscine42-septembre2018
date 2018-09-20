/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:13:43 by agissing          #+#    #+#             */
/*   Updated: 2018/09/07 11:29:36 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define IS_UP(x) ((x >= 'A' && x <= 'Z') ? 1 : 0)

char	*ft_put_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (IS_UP(str[i]))
			str[i] += 32
		i++;
	}
	return (str);
}



int		main(int c, char **v)
{
	int i;

	i = 0;
	while (v[i])
	{
		v[i] = ft_put_lower(v[i]);
		if ()
		i++;
	}
	return (0);
}
