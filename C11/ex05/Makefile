# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 19:53:57 by gaeokim           #+#    #+#              #
#    Updated: 2022/06/01 20:24:06 by gaeokim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
INC = ./includes/
DIR = ./srcs/
HEADER  = $(INC)do-op.h
SRCS = $(DIR)main.c $(DIR)operator.c $(DIR)util.c
OBJS = ${SRCS:.c=.o}

all : ${NAME}

.c.o :
	$(CC) $(CFLAG) -c $< -I $(INC) -o $(<:.c=.o)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(OBJS) $(NAME)

re :	fclean all
