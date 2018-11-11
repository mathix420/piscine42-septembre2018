/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 18:28:25 by agissing          #+#    #+#             */
/*   Updated: 2018/09/19 18:28:27 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFFSIZE 1
# define BUFFINSIZE 10000

typedef struct	s_map
{
	int		nb_lin;
	int		nb_col;
	int		size_meta;
	char	c_blank;
	char	c_obs;
	char	c_fill;
	char	*path;
}				t_map;

typedef struct	s_pos
{
	int		x;
	int		y;
	int		max;
}				t_pos;

t_map			ft_new_map(char *path);
t_pos			ft_get_max(int *tab, t_map map);
void			ft_change_tab(t_map *map, char **str);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_print_result(char *str_map, t_map map, t_pos pos);
void			ft_debug(t_map map);
void			ft_puterror(char c);
void			ft_error(char *error);
char			*ft_realloc(char *str, char *tmp);
char			*ft_strcat(char *dest, char *src);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *src);
int				ft_read(char *path);
int				ft_atoi(char *str);
int				count_char(int fd, t_map *map);
int				check_first_line(int fd, t_map *map);
int				ft_strlen_revenge(char *str);
int				*ft_get_tab(t_map *map, char *str);
int				ft_process_data(t_map *map, char *str);
int				ft_storage(int fd, t_map *map);
int				ft_get_min(int pos, t_map map, int *tab);
int				ft_read_stdin(void);
int				ft_strlen(char *str);
int				ft_process_in(t_map *map, char *str);
int				ft_count_char_in(char *str, t_map *map);
int				ft_storage_in(char *str_map, t_map *map);
int				ft_is_valid(char c, t_map *map);
int				ft_perform_result(char *str_map, t_map *map, char *sav_map);
int				ft_checkup_in(t_map *map, char *str);

#endif
