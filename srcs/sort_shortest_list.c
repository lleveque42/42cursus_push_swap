/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_shortest_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 13:41:47 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/06 19:16:23 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3_list(t_int_list **stack_a, int len)
{
	int i;

	i = len;
	while (!is_sorted(stack_a))
	{
		if ((*stack_a)->index == i)
			i--;
		else if ((*stack_a)->next->index == i)
		{
			swap_a(stack_a);
			i--;
		}
		else if ((*stack_a)->next->next && (*stack_a)->next->next->index == i)
			reverse_rotate_a(stack_a);
		else
			rotate_a(stack_a);
	}
}

void	sort_10_list(t_int_list **stack_a, t_int_list **stack_b, int len)
{
	int	i;

	i = 0;
	while (i < len && !is_sorted(stack_a))
	{
		if ((*stack_a)->index == i)
		{
			push_b(stack_a, stack_b);
			i++;
		}
		else if ((*stack_a)->next->index == i)
			swap_a(stack_a);
		else if (is_in_second_part(stack_a, i))
			reverse_rotate_a(stack_a);
		else
			rotate_a(stack_a);
	}
	while (*stack_b)
		push_a(stack_b, stack_a);
}

