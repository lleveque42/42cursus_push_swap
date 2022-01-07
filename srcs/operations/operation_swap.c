/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:14:53 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/07 17:00:40 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	swap_func(t_stack **lst)
{
	int	tmp_content;
	int	tmp_index;

	if (*lst && (*lst)->next)
	{
		tmp_content = (*lst)->content;
		tmp_index = (*lst)->index;
		(*lst)->content = (*lst)->next->content;
		(*lst)->index = (*lst)->next->index;
		(*lst)->next->content = tmp_content;
		(*lst)->next->index = tmp_index;
		return (1);
	}
	return (0);
}

void	swap_a(t_stack **lst)
{
	if (swap_func(lst))
		ft_putstr("sa\n");
}

void	swap_b(t_stack **lst)
{
	if (swap_func(lst))
		ft_putstr("sb\n");
}

void	swap_s(t_stack **stack_a, t_stack **stack_b)
{
	int	bool;

	bool = 0;
	if (swap_func(stack_a))
		bool += 1;
	if (swap_func(stack_b))
		bool += 1;
	if (bool)
		ft_putstr("ss\n");
}
