/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 09:48:11 by agissing          #+#    #+#             */
/*   Updated: 2018/09/09 22:26:03 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <unistd.h>
# include <stdlib.h>

int		**ft_tab(int c, char **v, int **tab);
int		ft_check(int **tab, int x, int y);
int		is_same(int **tab, int **verif);
int		ft_check_arg(int c, char **v);
int		back_tr(int **tab, int pos);
int		ft_turn_table(int **tab);
void	ft_print(int **tab);
int		**make_tab(void);

#endif
