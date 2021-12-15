# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 09:52:26 by lleveque          #+#    #+#              #
#    Updated: 2021/12/15 09:52:26 by lleveque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addprefix srcs/, push_swap.c)

OBJS = ${SRCS:.c=.o}

NAME = push_swap

LIBFT = libft/libft.a

CC = clang

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

${NAME}:	${OBJS}
			@make -C libft
			@${CC} ${OBJS} ${CFLAG} -o ${NAME} ${LIBFT}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
		@make -C libft clean
		${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
			${RM} ${LIBFT}

re: fclean all

.PHONY: all clean fclean re
