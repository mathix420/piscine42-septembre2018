/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_to_postfix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 09:39:35 by agissing          #+#    #+#             */
/*   Updated: 2018/09/16 18:38:39 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

#define PR_A(c) (c == '*' || c == '/')
#define PR_B(c) (c == '+' || c == '-')
#define IS_OP(c) (PR_A(c) || PR_B(c))
#define IS_NB(c) (c >= '0' && c <= '9')

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_count_op(char *str)
{
	int		c;

	c = 0;
	while (*str)
	{
		if (IS_OP(*str))
			c++;
		str++;
	}
	return (c);
}

int		ft_comp(char c, char r)
{
	if (PR_A(c) && PR_B(r))
		return (1);
	if (PR_B(c) && PR_A(r))
		return (0);
	return (-1);
}

int		precedence(char op)
{
	if (PR_A(op))
		return (2);
	if (PR_B(op))
		return (1);
	return (-1);
}

char	*ft_converter(char *in)
{
	char	*out;
	t_stack	*stack;
	int		i;
	int		j;

	i = 0;
	j = -1;
	stack = create(strlen(in));
	if (!(out = malloc(sizeof(char) * (ft_strlen(in) + 1))))
		return (0);
	while (in[i])
	{
		if (IS_NB(in[i]))
			out[++j] = in[i];
		else if (in[i] == '(')
			push(stack, in[i]);
		else if (in[i] == ')')
		{
			while (!is_empty(stack) && peek(stack) != '(')
				out[++j] = pop(stack);
			if (!is_empty(stack) && peek(stack) != '(')
				return (0);
			else
				pop(stack);
		}
		else
		{
			while (!is_empty(stack) && precedence(in[i]) <= precedence(peek(stack)))
				out[++j] = pop(stack);
			push(stack, in[i]);
		}
		i++;
	}
	while (!is_empty(stack))
		out[++j] = pop(stack);
	out[++j] = '\0';
	return (out);
}

int   main(void)
{
	char *s = ft_converter("(5 + 54 * 42)");
	return (0);  
}
