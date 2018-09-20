/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agissing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 17:12:06 by agissing          #+#    #+#             */
/*   Updated: 2018/09/11 14:31:48 by agissing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    **ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

int		main(void)
{
	char **s3 = ft_split_whitespaces("7t                  D6HJKsRPet              AEF5            4jG");
	ft_print_words_tables(s3);
	return (0);
}
