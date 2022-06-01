# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 20:05:17 by gaeokim           #+#    #+#              #
#    Updated: 2022/06/01 15:23:27 by gaeokim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
gcc -Wall -Werror -Wextra -c *.c
ar rc libft.a *.o
