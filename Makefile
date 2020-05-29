# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbaron <vbaron@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/28 17:52:53 by vbaron            #+#    #+#              #
#    Updated: 2020/05/29 23:53:20 by vbaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 	./srcs/*.c \ 
		./Libft/*.c, \ 
		./includes/*.c \

SRC_TEST = ./mains/printf_main.c

all: 
			gcc -Wall -Werror -Wextra $(SRC)

alltest: 
			all 
			$(SRC_TEST)

clean:
	rm -f *.o

fclean: 
		clean
		rm -f $(NAME)

re: fclean all

