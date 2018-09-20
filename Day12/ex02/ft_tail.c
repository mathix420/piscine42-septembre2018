/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 22:33:45 by agissing          #+#    #+#             */
/*   Updated: 2018/09/20 14:07:07 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_putchar(char c, int out)
{
	write(out, &c, 1);
}

void	ft_putstr(char *str, int out)
{
	while (*str != '\0')
		ft_putchar(*str++, out);
}

void	ft_print_error(int code, char *name)
{
	ft_putstr("tail: ", 2);
	ft_putstr(name, 2);
	if (code == EACCES)
		ft_putstr(": Permission denied\n", 2);
	else if (code == ENOENT)
		ft_putstr(": No such file or directory\n", 2);
	else if (code == EISDIR)
		ft_putstr(": Is a directory\n", 2);
}

int		ft_p(char *v, char *str)
{
	int     rd;
	int     fd;

	fd = open(v, O_RDONLY);
	if (fd != -1)
	{
		rd = read(fd, str, 29000);
		if (rd != -1)
		{
			str[rd] = '\0';
			ft_putstr(str, 1);
		}
		else
				return (0);
	}
	else
		return (0);
	return (1);
}

int		main(int c, char **v)
{
	int		rd;
	char	str[29001];
	int		i;	

	i = 1;
	if (c < 2)
	{
		while ((rd = read(0, str, 29000)))
		{
			str[rd] = '\0';
			ft_putstr(str, 1);
		}
	}
	else if (c >= 2)
	{
		while (i < c)
		{
			if (!ft_p(v[i], str))
				ft_print_error(errno, v[i]);
			i++;
		}
	}
	return (0);
}
