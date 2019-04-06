# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bnigellu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 14:15:50 by bnigellu          #+#    #+#              #
#    Updated: 2019/04/05 14:22:04 by bnigellu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNCTION_C = ft_*.c
FUNCTION_O = ft_*.o

all : $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -I. -c $(FUNCTION_C)
	ar rc $(NAME) $(FUNCTION_O)
	ranlib $(NAME)
	rm -f $(FUNCTION_O)

clean:
	rm -f $(FUNCTION_O)

fclean: clean
	rm -f $(NAME)

re: fclean all
