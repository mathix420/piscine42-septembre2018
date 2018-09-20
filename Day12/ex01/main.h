/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 15:36:37 by agissing          #+#    #+#             */
/*   Updated: 2018/09/19 22:04:20 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <fcntl.h>
# include <unistd.h>
# include <errno.h>

void    ft_putchar(char c, int out);
void    ft_putstr(char *str, int out);
void    ft_print_error(int code, char *name);
int     ft_p(char *v, char *str);

#endif
