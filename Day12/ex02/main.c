/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 19:00:15 by agissing          #+#    #+#             */
/*   Updated: 2018/09/20 19:00:17 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

void	dis_error(char *str)
{
	ft_putstr_e("tail: ");
	ft_putstr_e(str);
	if (errno == EACCES)
		ft_putstr_e(": Permission denied\n");
	if (errno == EISDIR)
		return ;
	else
		ft_putstr_e(": No such file or directory\n");
	return ;
}

void	ten_line(char *str, int bits)
{
	int i;
	int prints;

	i = 0;
	while (str[i] != '\0')
		i++;
	prints = i - bits;
	if (bits >= i)
		prints = 0;
	while (prints <= i && str[prints])
	{
		ft_putchar(str[prints]);
		prints++;
	}
}

void	read_files(char *str, int bits, char c)
{
	int		fd;
	char	buf[BUF_SIZE];
	int		ret;
	char	*buffinal;

	if (!(buffinal = malloc(sizeof(char))))
		return ;
	buffinal[0] = 0;
	if ((fd = open(str, O_RDONLY)) == -1)
	{
		dis_error(str);
		close(fd);
		return ;
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		buffinal = ft_fakecat(buffinal, buf);
		buffinal = ft_fakecat(buffinal, "\0");
	}
	if (c == '+')
		plus_line(buffinal, bits);
	else
		ten_line(buffinal, bits * ((c == '-') ? -1 : 1));
	close(fd);
}

int		ft_tail(int ac, char **av)
{
	int i;
	int bits;

	i = 3;
	bits = -1;
	if ((ft_strcmp(av[1], "-c") == 0) && (is_num(av[2]) == 1) && !av[3])
		return (error_str(0));
	if ((ft_strcmp(av[1], "-c") == 0) && (is_num(av[2]) == 0))
	{
		offset(av[2]);
		return (0);
	}
	if ((ft_strcmp(av[1], "-c") == 0) && (is_num(av[2]) == 1) && av[3])
	{
		bits = ft_atoi(av[2]);
		i = 3;
	}
	while (i < ac)
	{
		if (ac > 4)
			multifiles(av[i], i);
		read_files(av[i++], bits, av[2][0]);
	}
	return (0);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 1)
		return (0);
	ft_tail(ac, av);
	return (0);
}
