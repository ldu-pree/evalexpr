# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    make                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/27 15:58:55 by jsarkis           #+#    #+#              #
#    Updated: 2019/02/27 21:11:39 by ldu-pree         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OUT = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
INCLUDES = includes/
FLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)
clean:
	/bin/rm -f $(OUT)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
