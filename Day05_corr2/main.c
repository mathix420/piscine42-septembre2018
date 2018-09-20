/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 12:46:27 by agissing          #+#    #+#             */
/*   Updated: 2018/09/06 13:12:15 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prot.h"
#include <string.h>
#include <stdlib.h>

void	ft_putchar(char c);

int		main(int c, char **v)
{
	char	s1[40] = "Une chaine de test";
	char	s2[] = "chaine";
	char	s3[] = "-12345";
	int		i = -12345;

	(void)c;
	ft_putstr(s1);
	ft_putchar('\n');
	ft_putnbr(i);
	ft_putchar('\n');
	ft_putnbr(ft_atoi(s3));
	ft_putchar('\n');
	ft_putnbr(atoi(s3));
	ft_putchar('\n');
	ft_putstr(ft_strcpy(s1, s2));
	ft_putchar('\n');
	ft_putstr(strcpy(s1, s2));
	ft_putchar('\n');
	ft_putstr(ft_strncpy(s1, s2, 3));
	ft_putchar('\n');
	ft_putstr(strncpy(s1, s2, 3));
}