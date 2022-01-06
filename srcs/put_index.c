/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:25:59 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/05 17:29:08 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	put_0_in_lowest(t_int_list **stack_a, int lowest)
{
	while ((*stack_a)->content != lowest)
		stack_a = &(*stack_a)->next;
	(*stack_a)->index = 0;
}

size_t	put_last_in_highest(t_int_list **stack_a, int highest)
{
	t_int_list	*first;
	size_t		len;

	len = 0;
	first = *stack_a;
	while ((*stack_a)->next)
	{
			*stack_a = (*stack_a)->next;
			len++;
	}
	*stack_a = first;
	while ((*stack_a)->content != highest)
		*stack_a = (*stack_a)->next;
	(*stack_a)->index = len;
	*stack_a = first;
	return (len);
}

int	is_index_sorted(t_int_list **stack_a)
{
	while (*stack_a)
	{
		if ((*stack_a)->index == -1)
			return (0);
		*stack_a = (*stack_a)->next;
	}
	return (1);
}

int	get_next(t_int_list **stack_a, int prev, int highest)
{
	int	next;

	next = highest;
	while (*stack_a)
	{
		if ((*stack_a)->content > prev && (*stack_a)->content < next)
			next = (*stack_a)->content;
		stack_a = &(*stack_a)->next;
	}
	return (next);
}

int	put_index(t_int_list **stack_a)
{
	int			lowest;
	int			highest;
	int			index;
	int			next;
	t_int_list	*first;

	lowest = get_lowest(stack_a);
	highest = get_highest(stack_a);
	index = 1;
	next = lowest;
	first = *stack_a;
	put_0_in_lowest(stack_a, lowest);
	put_last_in_highest(stack_a, highest);
	while (!is_index_sorted(stack_a))
	{
		next = get_next(stack_a, next, highest);
		while ((*stack_a)->content != next)
			*stack_a = (*stack_a)->next;
		(*stack_a)->index = index;
		index++;
		*stack_a = first;
	}
	*stack_a = first;
	return (index);
}
