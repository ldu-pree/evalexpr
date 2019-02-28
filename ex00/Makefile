# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: camurray <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/30 00:23:26 by camurray          #+#    #+#              #
#    Updated: 2019/01/30 10:47:58 by camurray         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRC = srcs/main.c srcs/print.c srcs/ft_string.c
OUT = main.o print.o ft_string.o
HEADER = includes/
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC) -I$(HEADER)
	gcc $(FLAGS) $(OUT) -o $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
