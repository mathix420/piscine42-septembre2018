/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 14:43:51 by agissing          #+#    #+#             */
/*   Updated: 2018/09/16 18:40:32 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <unistd.h>

typedef struct	s_stack
{
	int				top;
	unsigned int	capacity;
	int				*array;
}				t_stack;

t_stack *create(unsigned capacity);
int     is_full(t_stack *stack);
int     is_empty(t_stack *stack);
void    push(t_stack *stack, char item);
char    peek(t_stack *stack);
char    pop(t_stack *stack);

#endif
