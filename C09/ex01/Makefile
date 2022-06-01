# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 20:16:54 by gaeokim           #+#    #+#              #
#    Updated: 2022/06/01 20:59:00 by gaeokim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
INC = ./includes/
DIR = ./srcs/
HEADER  = $(INC)ft.h
SRCS = $(DIR)ft_putchar.c $(DIR)ft_swap.c $(DIR)ft_putstr.c $(DIR)ft_strlen.c $(DIR)ft_strcmp.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

.c.o :
	$(CC) $(CFLAG) -c $< -I $(INC) -o $(<:.c=.o)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(OBJS) $(NAME)

re :	fclean all
