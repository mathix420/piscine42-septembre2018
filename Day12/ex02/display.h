/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 18:57:14 by agissing          #+#    #+#             */
/*   Updated: 2018/09/20 18:57:18 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_H
# define DISPLAY_H

# define BUF_SIZE (32 * 1024)

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putchar_e(char c);
void	ft_putstr(char *str);
void	ft_putstr_e(char *str);
int		error_str(int w);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		is_num(char *str);
char	*ft_fakecat(char *s1, char *s2);
void	plus_line(char *str, int bits);
void	multifiles(char *file, int i);
void	offset(char *str);

#endif
