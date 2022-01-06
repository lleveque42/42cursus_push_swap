# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 09:52:26 by lleveque          #+#    #+#              #
#    Updated: 2022/01/06 20:53:46 by lleveque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addprefix srcs/, push_swap.c check_error_funct.c parse_input_funct.c \
		check_error_utils.c free_func.c lst_func.c operation_swap.c \
		operation_push.c operation_rotate.c operation_reverse_rotate.c \
		operation_utils.c put_index.c sort_list.c sort_list_func.c \
		sort_shortest_list.c sort_short_list.c sort_long_list.c)

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
