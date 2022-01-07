/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:06:35 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/07 17:00:38 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	rotate_func(t_stack **lst)
{
	t_stack	*tmp;

	if (*lst && (*lst)->next)
	{
		tmp = (*lst);
		(*lst)->next->prev = NULL;
		while ((*lst)->next)
			*lst = (*lst)->next;
		(*lst)->next = tmp;
		tmp->next = NULL;
		tmp->prev = *lst;
		while ((*lst)->prev)
			*lst = (*lst)->prev;
		return (1);
	}
	return (0);
}

void	rotate_a(t_stack **lst)
{
	if (rotate_func(lst))
		ft_putstr("ra\n");
}

void	rotate_b(t_stack	**lst)
{
	if (rotate_func(lst))
		ft_putstr("rb\n");
}

void	rotate_r(t_stack **stack_a, t_stack **stack_b)
{
	int	bool;

	bool = 0;
	if (rotate_func(stack_a))
		bool += 1;
	if (rotate_func(stack_b))
		bool += 1;
	ft_putstr("rr\n");
}
