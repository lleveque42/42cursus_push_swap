# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 09:52:26 by lleveque          #+#    #+#              #
#    Updated: 2021/12/15 13:42:10 by lleveque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addprefix srcs/, push_swap.c check_input_error.c parse_input_in_tab.c)

OBJS = ${SRCS:.c=.o}

NAME = push_swap

LIBFT = libft/libft.a

PRINTF = libftprintf/libftprintf.a

CC = clang

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

${NAME}:	${OBJS}
			@make -C libft
			@make -C libftprintf
			@${CC} ${OBJS} ${CFLAG} -o ${NAME} ${LIBFT} ${PRINTF}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
		@make -C libft clean
		@make -C libftprintf clean
		${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
			${RM} ${LIBFT} ${PRINTF}

re: fclean all

.PHONY: all clean fclean re
