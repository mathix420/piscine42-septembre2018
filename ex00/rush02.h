/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschoenh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 15:57:01 by aschoenh          #+#    #+#             */
/*   Updated: 2018/09/15 19:34:10 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

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

#endif
