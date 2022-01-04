/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 05:17:38 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/26 09:50:16 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_short_list(t_int_list **stack_a, t_int_list **stack_b)
{
	int	highest;
	int	lowest;

	// (void)stack_b;
	highest = get_highest(stack_a);
	lowest = get_lowest(stack_a);
	// while (!is_sorted(stack_a) || (*stack_b))
	// {
	while ((*stack_a)->content < (*stack_a)->next->content)
	{
		push_b(stack_a, stack_b);
		push_b(stack_a, stack_b);
	}
	t_int_list **tmp = stack_b;
	while ((*stack_b)->next)
		stack_b = &(*stack_b)->next;
	printf("cont = %d\nnext = %d\n", (*stack_b)->content, (*tmp)->content);
	// while ((*stack_b)->content > (*tmp)->content)
	// {
		rotate_b(stack_b);
		// *tmp = (*tmp)->prev;
		printf("%d\n", (*tmp)->content);
	// }
	print_lst(stack_a, stack_b);
	printf("highest = %d\n", highest);
	printf("lowest = %d\n", lowest);
	// }
}

void	sort_list(t_int_list **stack_a, t_int_list **stack_b)
{
	sort_short_list(stack_a, stack_b);
}
