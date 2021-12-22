/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:55:07 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/22 19:12:28 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	reverse_rotate_func(t_int_list	**lst)
{
	int	bool;
	t_int_list	*tmp;

	bool = 0;
	if (*lst && (*lst)->next)
	{
		tmp = *lst;
		while ((*lst)->next)
			*lst = (*lst)->next;
		(*lst)->next = tmp;
		(*lst)->next->prev = *lst;
		(*lst)->prev->next = NULL;
		(*lst)->prev = NULL;
		while ((*lst)->prev)
			*lst = (*lst)->prev;
		bool = 1;
	}
	return (bool);
}

void	reverse_rotate_a(t_int_list	**lst)
{
	if (reverse_rotate_func(lst))
		ft_printf("rra\n");
}

void	reverse_rotate_b(t_int_list	**lst)
{
	if (reverse_rotate_func(lst))
		ft_printf("rrb\n");
}

void	reverse_rotate_r(t_int_list **stack_a, t_int_list **stack_b)
{
	int	bool;

	bool = 0;
	if (reverse_rotate_func(stack_a))
		bool += 1;
	if (reverse_rotate_func(stack_b))
		bool += 1;
	if (bool)
		ft_printf("rr\n");
}