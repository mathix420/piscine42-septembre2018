#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agissing <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 11:09:45 by agissing          #+#    #+#              #
#    Updated: 2018/09/19 22:27:55 by agissing         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

.SILENT :

all :
	gcc -c ft_cat.c
	gcc -I main.h -o ft_cat ft_cat.o

clean :
	rm -f ft_cat.o

fclean : clean
	rm -f ft_cat

re : fclean all