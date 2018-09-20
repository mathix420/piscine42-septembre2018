/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 10:42:49 by agissing          #+#    #+#             */
/*   Updated: 2018/09/04 13:40:50 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

void	ft_sort(char **v)
{
	int		i;
	int		res;
	char	*tmp;

	i = 1;
	while (v[i])
	{
		if (v[i + 1])
		{
			res = ft_cmp(v[i], v[i + 1]);
			if (res == 1)
			{
				tmp = v[i];
				v[i] = v[i + 1];
				v[i + 1] = tmp;
				i = 0;
			}
		}
		i++;
	}
}

int		main(int c, char **v)
{
	int	i;
	int	j;

	(void)c;
	i = 1;
	ft_sort(v);
	while (v[i])
	{
		j = 0;
		while (v[i][j])
		{
			ft_putchar(v[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
