#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agissing <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/15 20:46:17 by agissing          #+#    #+#              #
#    Updated: 2018/09/16 20:56:35 by aschoenh         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

.SILENT:

NAME = colle-02

SRCS = srcs/basics.c			\
	   srcs/ft_comp.c			\
	   srcs/ft_dimensions.c		\
	   srcs/ft_rush_x.c			\
	   srcs/struct_builder.c	\
	   srcs/main.c				\

OBJS = basics.o					\
	   ft_comp.o				\
	   ft_dimensions.o			\
	   ft_rush_x.o				\
	   struct_builder.o			\
	   main.o					\

all: $(NAME)

$(NAME):
	cc -c -Wall -Werror -Wextra $(SRCS)

	cc -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
