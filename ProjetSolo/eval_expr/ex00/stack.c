/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 14:33:30 by agissing          #+#    #+#             */
/*   Updated: 2018/09/16 18:25:01 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*create(unsigned capacity)
{
	t_stack		*stack;

	if (!(stack = malloc(sizeof(t_stack))))
		return (NULL);
	stack->capacity = capacity;
	stack->top = -1;
	if (!(stack->array = malloc(sizeof(int) * capacity)))
		return (NULL);
	return (stack);
}

int		is_full(t_stack *stack)
{
	return (stack->top == stack->capacity - 1);
}

int		is_empty(t_stack *stack)
{
	return (stack->top == 0);
}

void	push(t_stack *stack, char item)
{
	if (is_full(stack))
		return ;
	stack->array[++stack->top] = item;
}

char	peek(t_stack *stack)
{
	return (stack->array[stack->top]);
}

char	pop(t_stack *stack)
{
	if (is_empty(stack))
		return (stack->array[stack->top--]);
}
