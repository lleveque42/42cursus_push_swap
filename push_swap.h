/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:34:57 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/17 16:51:51 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack
{
	struct s_stack	*prev;
	int				content;
	int				index;
	struct s_stack	*next;
}	t_stack;

void	print_lst(t_stack **stack_a, t_stack **stack_b);

int		check_num(char *s);
int		check_double(int *tab, size_t len);
int		check_atoi(char **tab);
int		check_int(char **tab);
int		check_int_min_and_max(char *s);
int		ft_check_error(void);
void	*ft_error(void);
void	ft_free_lst(t_stack **lst);
void	*ft_free_char(char **tab);
void	*ft_free_error(char **char_tab, int *int_tab);
void	ft_putstr_error(void);
char	**parse_arg_in_tab(char **av);
int		*parse_input_in_tab(char **char_tab, size_t len);
t_stack	*ft_int_lstnew(int content, void *prev);
t_stack	*parse_input_in_stack_a(int *tab, size_t len);
void	ft_int_lstadd_front(t_stack **alst, t_stack *new);
void	ft_putstr(char *s);
void	swap_a(t_stack **lst);
void	swap_b(t_stack **lst);
void	swap_s(t_stack **stack_a, t_stack **stack_b);
void	push_a(t_stack **src, t_stack **dst);
void	push_b(t_stack **src, t_stack **dst);
void	rotate_a(t_stack **lst);
void	rotate_b(t_stack	**lst);
void	rotate_r(t_stack **stack_a, t_stack **stack_b);
void	reverse_rotate_a(t_stack	**lst);
void	reverse_rotate_b(t_stack	**lst);
void	reverse_rotate_r(t_stack **stack_a, t_stack **stack_b);
int		put_index(t_stack **stack_a);
int		get_list_size(t_stack **lst);
int		get_chunk_size(int size);
int		is_sorted(t_stack **lst);
int		get_highest(t_stack **lst);
int		get_lowest(t_stack **lst);
int		is_in_second_part(t_stack **lst, int i);
int		ra_or_rra(t_stack **lst, int ch_begin, int ch_end);
void	sort_list(t_stack **stack_a, t_stack **stack_b, int len);
void	sort_3_list(t_stack **stack_a, int len);
void	sort_10_list(t_stack **stack_a, t_stack **stack_b, int len);
void	sort_short_list(t_stack **stack_a, t_stack **stack_b, int len);
void	sort_long_list(t_stack **stack_a, t_stack **stack_b, int len);
void	radix_sort_list(t_stack **stack_a, t_stack **stack_b, int len);

#endif
