# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 20:16:54 by gaeokim           #+#    #+#              #
#    Updated: 2022/06/02 14:27:40 by gaeokim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = ft_display_file
INC = ./includes/
DIR = ./srcs/
HEADER  = $(INC)
SRCS = $(DIR)
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
