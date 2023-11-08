# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maxime_pierrot <maxime_pierrot@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 12:26:58 by mpierrot          #+#    #+#              #
#    Updated: 2023/11/08 18:28:15 by maxime_pier      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES =  ft_atoi.c \
         ft_bzero.c \
         ft_isalnum.c \
         ft_isalpha.c \
         ft_isascii.c \
         ft_isdigit.c \
         ft_isprint.c \
         ft_memset.c \
         ft_memcpy.c \
		 ft_memmove.c \
		 ft_strdup.c \
		 ft_strlcat.c \
		 ft_strlcpy.c \
         ft_strlen.c \
         ft_strncmp.c \

OBJ_FILES = $(SRC_FILES:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

AR = ar rcs
RM = rm -rf
MKDIR = mkdir -p

all: $(NAME)

$(NAME): $(OBJ_FILES)
	@$(AR) $@ $^
	@echo "$(NAME) has been created successfully."

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	@$(RM) $(OBJ_FILES)
	@echo "Object files have been removed."

fclean: clean
	@$(RM) $(NAME)m
	@echo "$(NAME) has been removed."

re: fclean all

.PHONY: all clean fclean re