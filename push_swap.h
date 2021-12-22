/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:34:57 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/22 15:48:37 by lleveque         ###   ########.fr       */
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
void		*ft_error(void);
void		ft_free_lst(t_int_list **lst);
void		*ft_free_char(char **tab);
void		*ft_free_error(char **char_tab, int *int_tab);
char		**parse_arg_in_tab(char **av);
int			*parse_input_in_tab(char **char_tab, size_t len);
t_int_list	*ft_int_lstnew(int content, void *prev);
t_int_list	*parse_input_in_stack_a(int *tab, size_t len);
void		ft_int_lstadd_front(t_int_list **alst, t_int_list *new);
void		swap_a(t_int_list *lst);
void		swap_b(t_int_list *lst);
void		swap_s(t_int_list *stack_a, t_int_list *stack_b);
void		push_a(t_int_list **src, t_int_list **dst);
void		push_b(t_int_list **src, t_int_list **dst);

#endif