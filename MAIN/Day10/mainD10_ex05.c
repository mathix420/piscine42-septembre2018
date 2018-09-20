/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 17:57:18 by agissing          #+#    #+#             */
/*   Updated: 2018/09/13 18:35:39 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			*ft_map(int *tab, int length, int (*f)(int));
void		ft_foreach(int *tab, int length, void (*f)(int));
int			ft_any(char **tab, int (*f)(char*));
int			ft_count_if(char **tab, int (*f)(char*));
int			ft_is_sort(int *tab, int length, int(*f)(int, int));

void		ft_putnbr(int  i)
{
	printf("%d\n", i);
}

int		ft_mult(int i)
{
	return (i * 3);
}

int			ft_start_by_a(char *str)
{
	printf("\t - %s\n", str);
	if (str[0] == 'a' || str[0] == 'A')
		return (1);
	return (0);
}

int			ft_little(int a, int b)
{
	if (a <= b)
		return (-1);
	else
		return (1);
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
	int		*tab = malloc(sizeof(int) * 5);
	tab[0] = 5;
	tab[1] = 0;
	tab[2] = 2;
	tab[3] = 1;
	tab[4] = 5;
	ft_foreach(tab, 5, &ft_putnbr);
	printf("\n\t\t********* ALL TAB * 3 *********\n\n");
	ft_foreach(ft_map(tab, 5, ft_mult), 5, &ft_putnbr);
	printf("\n\t\t********* ONE ARG START WITH A ? *********\n\n");
	printf("\t\t Result :: %d !\n", ft_any(v, &ft_start_by_a));
	printf("\n\t\t********* HOW MANY ARGS START WITH A *********\n\n");
	printf("\t\t Result :: %d !\n", ft_count_if(v, &ft_start_by_a));
	printf("\n\t\t********* IS TAB SORTED ? *********\n\n");
	printf("\t\t Result :: %d !\n", ft_is_sort(tab, 5, &ft_little));
	return (0);
}
