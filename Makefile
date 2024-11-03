# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/27 22:36:38 by nikitadorof       #+#    #+#              #
#    Updated: 2024/11/02 23:17:51 by nikitadorof      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_memcpy.c ft_memset.c ft_strlcpy.c ft_strncmp.c\
ft_strrchr.c ft_bzero.c ft_isalpha.c ft_isdigit.c\
ft_memcmp.c ft_memchr.c ft_strchr.c ft_strlen.c ft_strnstr.c\
ft_strlcat.c ft_memmove.c ft_atoi.c ft_putchar_fd.c\
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
ft_strmapi.c ft_striteri.c ft_substr.c ft_strjoin.c\
ft_strtrim\
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
