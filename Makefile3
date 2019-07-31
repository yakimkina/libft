# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enikole <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 14:37:03 by enikole           #+#    #+#              #
#    Updated: 2019/07/13 16:43:59 by enikole          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
	  fun_csp.c \
	  fun_di.c \
	  fun_uo.c \
	  fun_x.c \
	  fun_f.c \
	  f_integer.c \
	  f_beauty.c \
	  f_summ.c \
	  f_fraction.c \
	  f_second_addend.c \
	  fun_flags.c \
	  fun_format.c \
	  initialization.c \
	  mod.c \
	  trash.c \
	  x_trash.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME):
	make -C libft/
	cp libft/libft.a ./$(NAME)
	gcc $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f *.o
	make clean -C libft/

fclean: clean
	rm -f $(NAME)
	make fclean -C libft/

re: fclean all
