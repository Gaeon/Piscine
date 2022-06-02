# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 19:53:57 by gaeokim           #+#    #+#              #
#    Updated: 2022/06/02 11:15:04 by gaeokim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = do-op
INC = ./includes/
DIR = ./srcs/
HEADER  = $(INC)do-op.h
SRCS = $(DIR)main.c $(DIR)operator.c $(DIR)util.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

.c.o :
	$(CC) $(CFLAG) -c $< -I $(INC) -o $(<:.c=.o)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	$(CC) $(CFLAG) $@ -o $@

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(OBJS) $(NAME)

re :	fclean all
