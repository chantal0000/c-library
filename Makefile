# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 10:34:54 by chbuerge          #+#    #+#              #
#    Updated: 2023/05/10 15:18:32 by chbuerge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		 		= 	cc
CFLAGS		 	=		-Wall -Wextra -Werror
NAME			= 		libft.a


SRCS	 = 		ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c

OBJS	 = ${SRCS:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
					ar rcs ${NAME} ${OBJS}

.c.o:		${CC} ${CFLAGS} -c $< -o $@

clean:				
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re

