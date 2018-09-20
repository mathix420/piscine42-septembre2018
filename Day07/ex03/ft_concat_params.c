/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 15:19:16 by agissing          #+#    #+#             */
/*   Updated: 2018/09/11 18:32:34 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_count(int argc, char **argv)
{
	int	count;
	int	i;

	i = 1;
	count = 0;
	while (i < argc)
	{
		count += ft_strlen(argv[i]) + 1;
		i++;
	}
	return (count - 1);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		counter;
	char	*str;

	i = 1;
	counter = 0;
	if (!(str = (char*)malloc(sizeof(char) * ft_count(argc, argv))))
		return ("");
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[counter] = argv[i][j];
			j++;
			counter++;
		}
		if (i + 1 < argc)
			str[counter] = '\n';
		counter++;
		i++;
	}
	str[ft_count(argc, argv)] = '\0';
	return ((str ? str : ""));
}
