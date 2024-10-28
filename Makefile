# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/27 22:36:38 by nikitadorof       #+#    #+#              #
#    Updated: 2024/10/28 16:33:37 by nikitadorof      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = myprog

OBJS = ft_isalnum.c ft_isascii.o ft_isprint.o\
ft_memcpy.o ft_memset.o ft_strlcpy.o ft_strncmp.o\
ft_strrchr.o ft_bzero.o ft_isalpha.o ft_isdigit.o\
ft_memcmp.o ft_memchr.o ft_strchr.o ft_strlen.o ft_strnstr.o
INCDIR = ../inc

CFLAGS = -Werror -Wextra -Wall -I(INCDIR)

$(TARGET) : $(OBJS)
	mkdir -p $(BIN_DIR)
	gcc $(CFLAGS) $(OBJS) -o $(TARGET)

$(OBJ_DIR)/%.o : $(OBJ_DIR)/ %.c
	mkdir -p $(OBJ_DIR)
	gcc -c $(CFLAGS) $< -o $@


.PHONY : clean
clean:
	rm -f *.o $(OBJ_DIR) $(BIN_DIR)