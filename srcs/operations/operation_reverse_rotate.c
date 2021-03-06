/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:55:07 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/11 09:43:44 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	reverse_rotate_func(t_stack	**lst)
{
	t_stack	*tmp;

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
		return (1);
	}
	return (0);
}

void	reverse_rotate_a(t_stack	**lst)
{
	if (reverse_rotate_func(lst))
		ft_putstr("rra\n");
}

void	reverse_rotate_b(t_stack	**lst)
{
	if (reverse_rotate_func(lst))
		ft_putstr("rrb\n");
}

void	reverse_rotate_r(t_stack **stack_a, t_stack **stack_b)
{
	int	bool;

	bool = 0;
	if (reverse_rotate_func(stack_a))
		bool += 1;
	if (reverse_rotate_func(stack_b))
		bool += 1;
	if (bool)
		ft_putstr("rrr\n");
}
