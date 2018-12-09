/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:00:45 by agissing          #+#    #+#             */
/*   Updated: 2018/09/06 11:11:13 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			ft_is_printable(char c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	else
		return (1);
}

void		ft_putnbr_hex(unsigned int i)
{
	unsigned int		t_base;
	char				*base;

	base = "0123456789abcdef";
	t_base = 16;
	if (i >= t_base)
	{
		ft_putnbr_hex(i / t_base);
		ft_putnbr_hex(i % t_base);
	}
	else
		ft_putchar(base[i]);
}

void		ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_is_printable(str[i]))
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_putnbr_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
