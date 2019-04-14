# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enikole <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/11 19:20:12 by enikole           #+#    #+#              #
#    Updated: 2019/04/13 15:26:35 by enikole          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_str_is_lowercase.c ft_str_is_uppercase.c ft_strlowcase.c ft_strupcase.c ft_itoa_base.c ft_atoi.c ft_lstiter.c ft_putchar.c ft_strcmp.c ft_strmapi.c ft_strtrim.c ft_bzero.c ft_lstmap.c ft_putchar_fd.c ft_strcpy.c ft_strncat.c ft_tolower.c ft_isalnum.c ft_lstnew.c ft_putendl.c ft_strdel.c ft_strncmp.c ft_toupper.c ft_isalpha.c ft_memalloc.c ft_putendl_fd.c ft_strdup.c ft_strncpy.c ft_isascii.c ft_memccpy.c ft_putnbr.c ft_strequ.c ft_strnequ.c ft_isdigit.c ft_memchr.c ft_putnbr_fd.c ft_striter.c ft_strnew.c ft_isprint.c ft_memcmp.c ft_putstr.c ft_striteri.c ft_strnstr.c ft_itoa.c ft_memcpy.c ft_putstr_fd.c ft_strjoin.c ft_strrchr.c ft_lstadd.c ft_memdel.c ft_strcat.c ft_strlcat.c ft_strsplit.c ft_lstdel.c ft_memmove.c ft_strchr.c ft_strlen.c ft_strstr.c ft_lstdelone.c ft_memset.c ft_strclr.c ft_strmap.c ft_strsub.c

OBJ = $(SRC:%.c=%.o);

all : $(NAME)

$(NAME) :
	@gcc $(FLAGS) -I libft.h -c $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
