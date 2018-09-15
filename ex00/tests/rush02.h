/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschoenh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 15:57:01 by aschoenh          #+#    #+#             */
/*   Updated: 2018/09/15 16:10:18 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

typedef	struct	s_char t_char;
struct 			s_char
{
	char		c;
	t_char		*next;
};

typedef struct	s_list t_list;
struct			s_list
{
	t_char	*first;
};

#endif
