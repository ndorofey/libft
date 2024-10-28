# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/27 22:36:38 by nikitadorof       #+#    #+#              #
#    Updated: 2024/10/28 20:30:18 by ndorofey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_memcpy.c ft_memset.c ft_strlcpy.c ft_strncmp.c\
ft_strrchr.c ft_bzero.c ft_isalpha.c ft_isdigit.c\
ft_memcmp.c ft_memchr.c ft_strchr.c ft_strlen.c ft_strnstr.c\
ft_strlcat.c ft_memmove.c ft_atoi.c 
OBJ = $(SRC:.c=.o)

CFLAGS = -Werror -Wextra -Wall
CC = gcc
LIB = ar -rsc
RM = rm -f


all: $(NAME)

$(NAME): $(OBJ) 
	$(LIB) $(NAME) $(OBJ)

%.o: %.c libft.h Makefile
	$(CC) $(CFLAGS) -c -o $@ $<
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: clean fclean re
