# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 12:59:54 by lleveque          #+#    #+#              #
#    Updated: 2021/12/20 12:59:54 by lleveque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= $(addprefix srcs/, ft_printf.c ft_putchar.c ft_putlstr.c ft_putlnbr.c \
			ft_uns_putlnbr.c ft_hex_putlnbr.c ft_hex_putlptr.c)

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

INC     = includes

RM		= rm -f

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I ${INC} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
