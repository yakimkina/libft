# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bnigellu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 14:15:50 by bnigellu          #+#    #+#              #
#    Updated: 2019/04/09 19:33:43 by enikole          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNCTION_C = ft_*.c
FUNCTION_O = ft_*.o

all : 
	gcc -fPIC -Wall -Wextra -Werror -I. -c $(FUNCTION_C)
	ar rc $(NAME) $(FUNCTION_O)
	ranlib $(NAME)
	rm -f $(FUNCTION_O)

so:
	gcc -Wall -Wextra -Werror -shared -o libft.so *.o

clean:
	rm -f $(FUNCTION_O)

fclean: clean
	rm -f $(NAME)

re: fclean all
