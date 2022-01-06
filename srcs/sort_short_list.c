/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:46:03 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/06 21:06:41 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_short_list(t_int_list **stack_a, t_int_list **stack_b, int len)
{
	int	i;
	int	chunk_begin;
	int	chunk_end;

	i = 0;
	chunk_begin = 0;
	chunk_end = len / 4;
	while ((*stack_a) != NULL && !is_sorted(stack_a))
	{
		while ((*stack_a) != NULL && i <= chunk_end)
		{
			if ((*stack_a)->index >= chunk_begin && (*stack_a)->index <= chunk_end)
			{
				push_b(stack_a, stack_b);
				i++;
			}
			else if ((*stack_a)->next->index >= chunk_begin
				&& (*stack_a)->next->index <= chunk_end)
				swap_a(stack_a);
			// else if (is_chunk_in_second_part(stack_a, i, chunk_end))
			// 	reverse_rotate_a(stack_a);
			else
				rotate_a(stack_a);
		}
		chunk_begin = chunk_end;
		chunk_end += len / 4 + 1;
	}
	if (*stack_a)
		i = (*stack_a)->index - 1;
	else
		i = len;
	while (*stack_b)
	{
		if ((*stack_b)->index == i)
		{
			push_a(stack_b, stack_a);
			i--;
		}
		else if ((*stack_b)->next->index == i)
			swap_b(stack_b);
		else if (is_in_second_part(stack_b, i))
			reverse_rotate_b(stack_b);
		else
			rotate_b(stack_b);
	}
}
