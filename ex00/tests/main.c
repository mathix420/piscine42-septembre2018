/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 09:27:26 by agissing          #+#    #+#             */
/*   Updated: 2018/09/15 20:26:32 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush02.h"

void	print(t_list *list);
t_list	*rush_00(int x, int y);
t_list	*rush_01(int x, int y);
t_list	*rush_02(int x, int y);
t_list	*rush_03(int x, int y);
t_list	*rush_04(int x, int y);

int		main(int c, char **v)
{
	(void)c;
	print(rush_00(atoi(v[1]), atoi(v[2])));
	print(rush_01(atoi(v[1]), atoi(v[2])));
	print(rush_02(atoi(v[1]), atoi(v[2])));
	print(rush_03(atoi(v[1]), atoi(v[2])));
	print(rush_04(atoi(v[1]), atoi(v[2])));
	return (0);
}
