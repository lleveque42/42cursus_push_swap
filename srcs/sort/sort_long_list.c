/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_long_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 20:51:02 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/07 19:04:49 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	put_in_b(t_stack **stack_a, t_stack **stack_b, int ch_begin, int ch_end)
{
	int	i;

	i = 0;
	while ((*stack_a) && !is_sorted(stack_a))
	{
		while ((*stack_a) && i <= ch_end)
		{
			if ((*stack_a)->index >= ch_begin && (*stack_a)->index <= ch_end)
			{
				push_b(stack_a, stack_b);
				i++;
			}
			else if ((*stack_a)->next->index >= ch_begin
				&& (*stack_a)->next->index <= ch_end)
				swap_a(stack_a);
			else if (ra_or_rra(stack_a, ch_begin, ch_end))
				rotate_a(stack_a);
			else
				reverse_rotate_a(stack_a);
		}
		ch_begin = ch_end;
		ch_end += get_chunk_size(get_list_size(stack_a)) + 1;
	}
}

void	sort_long_list(t_stack **stack_a, t_stack **stack_b, int len)
{
	int	i;
	int	ch_begin;
	int	ch_end;

	ch_begin = 0;
	ch_end = get_chunk_size(get_list_size(stack_a));
	put_in_b(stack_a, stack_b, ch_begin, ch_end);
	if (*stack_a)
		i = (*stack_a)->index - 1;
	else
		i = len;
	while (*stack_b)
	{
		if (!((*stack_b)->next) || (*stack_b)->index == i)
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
