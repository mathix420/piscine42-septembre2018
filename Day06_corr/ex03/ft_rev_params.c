/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 10:33:57 by agissing          #+#    #+#             */
/*   Updated: 2018/09/04 10:39:47 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int c, char **v)
{
	int	j;
	int	i;

	j = c - 1;
	while (j > 0)
	{
		i = 0;
		while (v[j][i])
		{
			ft_putchar(v[j][i]);
			i++;
		}
		ft_putchar('\n');
		j--;
	}
}
