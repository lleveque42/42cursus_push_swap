/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:34:57 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/15 13:43:42 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include "libftprintf/ft_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int	check_input_error(char **tab);
int	check_num(char *s);
int	check_double(char *s);
int	check_atoi(char **tab);
int	check_int(char *s);
int *parse_input_in_tab(char *s);


#endif