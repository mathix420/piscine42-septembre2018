/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 17:28:16 by agissing          #+#    #+#             */
/*   Updated: 2018/09/16 18:14:26 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define size 100

char	stack[size];
int		top = -1;

void	push(char item)
{
	if (top < size-1)
		stack[++top] = item;
}

char	pop()
{
	char	item;

	item = stack[top--];
	return (item);
}

int		is_operator(char c)
{
	if (c == '*' || c == '/' || c == '+' || c == '-')
		return (1);
	else
		return (0);
}

int		precedence(char op)
{
	if (op == '*' || op == '/')
		return (2);
	else if (op == '+' || op == '-')
		return (1);
	else
		return (0);
}

char    *ft_converter(char *in)
{
    char    out[size];
    char	tmp;
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (in[i])
    {
        if (in[i] == '(')
            push(in[i]);
        else if (in[i] >= '0' && in[i] <= '9')
        {
            while (in[i] >= '0' && in[i] <= '9')
					out[j++] = in[i++];
			out[j++] = ' ';
        }    
        else if (is_operator(in[i]))
        {
            tmp = pop();
            while (is_operator(tmp) && precedence(tmp) >= precedence(in[i]))
            {
                out[j++] = tmp;
                tmp = pop();
            }
			push(tmp);
            push(in[i]);
        }
        else if (in[i] == ')')
        {
            tmp = pop();
            while (tmp != '(')
            {
                out[j++] = tmp;
                tmp = pop();
            }
        }
        i++;
    }
    while (top > -1)
		out[j++] = pop();
    out[j] = '\0';
    printf("HEHE :: %s", out);
    return (out);
}

int   main(void)
{
	char *s = ft_converter("55 + 69 * 2 - 3 / 9");
	return (0);  
}
