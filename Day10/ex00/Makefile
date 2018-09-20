#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agissing <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/12 15:53:21 by agissing          #+#    #+#              #
#    Updated: 2018/09/13 15:16:10 by agissing         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

.SILENT:

NAME = libft.a

SRC =	srcs/ft_putchar.c		\
		srcs/ft_putstr.c		\
		srcs/ft_strcmp.c		\
		srcs/ft_strlen.c		\
		srcs/ft_swap.c

OBJECTS =	ft_putchar.o		\
			ft_putstr.o			\
			ft_strcmp.o			\
			ft_strlen.o			\
			ft_swap.o

HEADER = includes

all : $(NAME)

$(NAME) :
	gcc -c $(SRC) -I $(HEADER)
	ar -rv $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean :
	/bin/rm -f $(OBJECTS)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all