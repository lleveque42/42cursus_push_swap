/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:34:57 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/20 18:08:05 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include "libft/libftprintf/ft_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_int_list
{
	struct s_int_list	*prev;
	int					content;
	struct s_int_list	*next;
}	t_int_list;
int			check_num(char *s);
int			check_double(int *tab, size_t len);
int			check_atoi(char **tab);
int			check_int(char **tab);
int			check_int_min_and_max(char *s);
int			ft_check_error(void);
void		ft_free_lst(t_int_list **lst);
void		*ft_free_char(char **tab);
void		*ft_free_error(char **char_tab, int *int_tab);
int			*parse_input_in_tab(char **char_tab, size_t len);
t_int_list	*ft_int_lstnew(int content, void *prev);
t_int_list	**parse_input_in_stack_a(int *tab, size_t len);
t_int_list	**create_stack_b(char **char_tab);

#endif