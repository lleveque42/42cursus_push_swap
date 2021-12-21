# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 09:52:26 by lleveque          #+#    #+#              #
#    Updated: 2021/12/21 15:48:38 by lleveque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addprefix srcs/, push_swap.c check_error_funct.c parse_input_funct.c \
		check_error_utils.c free_func.c operation_swap.c operation_push.c \
		lst_func.c)

OBJS = ${SRCS:.c=.o}

NAME = push_swap

LIBFT = libft/libft.a

PRINTF = libft/libftprintf/libftprintf.a

CC = clang

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

${NAME}:	${OBJS}
			@make -C libft
			@make -C libft/libftprintf
			@${CC} ${OBJS} ${CFLAG} -o ${NAME} ${LIBFT} ${PRINTF}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
		@make -C libft clean
		@make -C libft/libftprintf clean
		${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
			${RM} ${LIBFT} ${PRINTF}

re: fclean all

.PHONY: all clean fclean re
