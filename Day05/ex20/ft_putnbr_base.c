/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 21:44:22 by agissing          #+#    #+#             */
/*   Updated: 2018/09/06 16:11:47 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			ft_str_is_alpha_numeric(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == '-' || str[i] == '+')
			return (0);
		while (str[j])
		{
			if (str[i] == str[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void		ft_putnbr_base(int nbr, char *base)
{
	unsigned int	t_base;
	unsigned int	i;

	if (nbr < 0)
	{
		ft_putchar('-');
		i = nbr * -1;
	}
	else
		i = nbr;
	t_base = ft_strlen(base);
	if (t_base > 1 && ft_str_is_alpha_numeric(base))
	{
		if (i >= t_base)
		{
			ft_putnbr_base(i / t_base, base);
			ft_putnbr_base(i % t_base, base);
		}
		else
		{
			ft_putchar(base[i % t_base]);
		}
	}
}
