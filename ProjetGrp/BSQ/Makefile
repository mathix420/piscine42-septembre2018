# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julaurai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/17 10:57:35 by julaurai          #+#    #+#              #
#    Updated: 2018/09/19 16:47:13 by agissing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT	:

NAME	=	bsq

CC		=	gcc

SRCS	=	srcs/main.c \
			srcs/basic.c \
			srcs/ft_init.c \
			srcs/ft_read.c \
			srcs/ft_storage.c \
			srcs/ft_get_min.c \
			srcs/ft_realloc.c \
			srcs/ft_strfunc.c \
			srcs/ft_stdin.c \
			srcs/ft_puterror.c \

OBJ		=	$(SRCS:.c=.o)

FLAG	=	-Wall -Wextra -Werror

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			gcc $(FLAG) $(SRCS) -o $(NAME)

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all
