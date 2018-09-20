/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 17:57:18 by agissing          #+#    #+#             */
/*   Updated: 2018/09/13 18:46:59 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void		ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));

void		ft_print_tab(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int			main(void)
{
	char	**v = malloc(sizeof(char*) * 6);
	v[0] = "Hello my dear friend !";
	v[1] = "Fuck you !";
	v[2] = "a gueule";
	v[3] = "cc";
	v[4] = "Adervjkf4865";
	v[5] = 0;
	ft_advanced_sort_wordtab(v, &ft_strcmp);
	ft_print_tab(v);
	return (0);
}
