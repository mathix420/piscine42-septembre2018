/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschoenh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 15:57:01 by aschoenh          #+#    #+#             */
/*   Updated: 2018/09/15 22:02:14 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct s_char	t_char;
typedef struct s_list	t_list;
typedef struct s_dim	t_dim;

struct		s_char
{
	char	c;
	t_char	*next;
};

struct		s_list
{
	t_char	*first;
};

struct		s_dim
{
	int		x;
	int		y;
};

t_char		*ft_new(t_list *list, t_char *last, int x, char *v);
t_char		*ft_add_node(t_list *list, t_char *last, char c);
t_dim		*ft_dimensions(t_list *list);
t_list		*rush_00(int x, int y);
t_list		*rush_01(int x, int y);
t_list		*rush_02(int x, int y);
t_list		*rush_03(int x, int y);
t_list		*rush_04(int x, int y);

void		ft_print_result(t_list *list);
void		ft_putstr(char *str);
void		print(t_list *list);
void		ft_putchar(char c);
void		ft_putnbr(int i);

#endif
