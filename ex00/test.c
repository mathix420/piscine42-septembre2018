/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:57:43 by agissing          #+#    #+#             */
/*   Updated: 2018/09/15 15:46:01 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define BUFF_SIZ 4096

int		ft_strlen(char *str)
{
	int	 i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int		main(void)
{
	int		offset;
	char	c;
	int		h;
	int		l;

	c = 0;
	h = 0;
	l = 0;
	while ((offset = read(0, &c, 1)))
	{
		if (c == '\n')
			h++;
		if (h == 0)
			l++;
	}
	printf("hauteur :: %d; largeur :: %d\n", h, l);
	c = 0;
	h = 0;
	l = 0;
	while ((offset = read(0, &c, 1)))
	{
		if (c == '\n')
			h++;
		if (h == 0)
			l++;
	}
	printf("hauteur :: %d; largeur :: %d\n", h, l);
	return (0);
}
