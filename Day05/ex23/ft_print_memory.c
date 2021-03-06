/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:06:47 by agissing          #+#    #+#             */
/*   Updated: 2018/09/06 18:40:23 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define IS_PRINTABLE(c) (c >= 32 && c <= 126 ? 1 : 0)

void		ft_putchar(char c);

void		ft_putnbr_hex(unsigned int i, unsigned int count)
{
	unsigned int		t_base;
	char				*base;

	base = "0123456789abcdef";
	t_base = 16;
	if (count > 0)
		count--;
	if (i >= t_base)
	{
		ft_putnbr_hex((i / t_base), count);
		ft_putnbr_hex((i % t_base), 0);
	}
	else
	{
		while (count > 0)
		{
			ft_putchar('0');
			count--;
		}
		ft_putchar(base[i]);
	}
}

void		ft_print_line(char *str, unsigned int start, unsigned int stop)
{
	unsigned int i;

	i = start;
	while (i < start + 16 && i < stop)
	{
		if (IS_PRINTABLE(str[i]))
			ft_putchar(str[i]);
		else
			ft_putchar('.');
		i++;
	}
	ft_putchar('\n');
}

void		ft_print_spaces(unsigned int stop)
{
	unsigned int		i;

	i = 16 - (stop % 16 == 0 ? 16 : (stop % 16));
	if ((stop % 16 == 0 ? 16 : (stop % 16)) % 2 != 0)
		ft_putchar(' ');
	while (i > 0)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (i % 2 == 0)
			ft_putchar(' ');
		i--;
	}
}

void		*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*str;

	str = (char*)addr;
	i = 0;
	while (i < size)
	{
		if ((i) % 16 == 0 || i == 0)
		{
			ft_putnbr_hex(i, 8);
			ft_putchar(':');
			ft_putchar(' ');
		}
		ft_putnbr_hex(str[i], 2);
		if ((i + 1) >= size)
			ft_print_spaces(size);
		if ((i + 1) % 2 == 0)
			ft_putchar(' ');
		if ((i + 1) % 16 == 0 || i + 1 >= size)
			ft_print_line(str, i - (i % 16), size);
		i++;
	}
	return (addr);
}
