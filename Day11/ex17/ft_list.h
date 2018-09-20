/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 17:24:28 by agissing          #+#    #+#             */
/*   Updated: 2018/09/13 17:25:27 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct		s_list
{
	struct s_list		*next;
	void				*data;
}					t_list;