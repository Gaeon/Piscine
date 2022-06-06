# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/05 20:20:55 by gaeokim           #+#    #+#              #
#    Updated: 2022/06/06 21:56:56 by gaeokim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c ft_map.c ft_util.c ft_split.c ft_map2.c
SRCS2	= $(addprefix ./srcs/, $(SRCS))
OBJS	= $(addprefix ./srcs/, $(SRCS:.c=.o))
INCS	= includes
NAME	= bsq
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Werror -Wextra

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I$(INCS)

all: $(NAME)

$(NAME): $(OBJS)
	ar cr $@ $^
	$(CC) $(CFLAGS) $@ -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re