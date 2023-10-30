# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpierrot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 12:26:58 by mpierrot          #+#    #+#              #
#    Updated: 2023/10/30 15:11:35 by mpierrot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC	= cc

CFLAGS	= -Wall -Wextra -Werror

SRC = $(wildcard *.o)

OBJS	=${.c = .o}

.c.o: 
	${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${oBJS}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean

re:	fclean all

