#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agissing <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/19 15:13:14 by agissing          #+#    #+#              #
#    Updated: 2018/09/19 15:18:16 by agissing         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

#.SILENT :

all :
	gcc -Wall -Werror -Wextra -c srcs/display_file.c
	gcc -Wall -Werror -Wextra display_file.o -I includes -o ft_display_file

clean :
	rm -f display_file.o

fclean : clean
	rm -f ft_display_file

re : fclean all