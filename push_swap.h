/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:34:57 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/16 19:17:43 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include "libft/libftprintf/ft_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_ll_list
{
	long long		*content;
	struct s_list	*next;
}	t_ll_list;
int	check_num(char *s);
int	check_double(long long *tab, size_t len);
int	check_atoi(char **tab);
int	check_ll(char **tab);
int	check_ll_min_and_max(char *s);
int	ft_check_error(void);
long long int	ft_atoll(char *nb);
long long int	*parse_input_in_tab(char **char_tab, size_t len);


#endif