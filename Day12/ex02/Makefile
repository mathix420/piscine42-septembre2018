#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agissing <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/20 18:57:30 by agissing          #+#    #+#              #
#    Updated: 2018/09/20 19:17:56 by agissing         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

.SILENT	:

NAME	= ft_tail

IDIR	= .
_INC	= display.h
INC		= $(patsubst %,$(IDIR)/%,$(_INC))

SDIR	= .
_SRC	=	ft_putstr.c \
			ft_putchar.c \
			ft_strcmp.c \
			ft_cat.c \
			ft_strlen.c \
			ft_atoi.c \
			is_num.c \
			main.c \
			main_bis.c

SRC		= $(patsubst %,$(SDIR)/%,$(_SRC))

OBJ		= $(_SRC:.c=.o)

FLAGS	= -Wall -Wextra -Werror
OPTS	= -o $(NAME) -I$(IDIR)

.PHONY	: all clean fclean re

all		: $(NAME)

$(NAME)	: $(OBJ)
		gcc $(FLAGS) $(OPTS) $(SRC)

$(OBJ)	: $(SRC)
		gcc -c -I$(IDIR) $(SRC)

clean	:
		/bin/rm -f $(OBJ)

fclean	: clean
		/bin/rm -f $(NAME)

re: clean all
