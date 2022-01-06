/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 05:17:38 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/06 16:43:10 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	is_b_sorted(t_int_list **stack_b, size_t i)
// {
// 	while (*stack_b)
// 	{
// 		if (i > 1 && (*stack_b)->index != (*stack_b)->next->index - 1)
// 			return (0);
// 		stack_b = &(*stack_b)->next;
// 	}
// 	return (1);
// }

// void	sort_b(t_int_list **stack_b, size_t i)
// {
// 	if ((*stack_b)->next && (*stack_b)->next->index != (*stack_b)->index - 1)
// }

// int	check_pushed_units(t_int_list **stack_a)
// {
// 	while (*stack_a)
// 	{
// 		if ((*stack_a)->index < 10)
// 			return (0);
// 		stack_a = &(*stack_a)->next;
// 	}
// 	return (1);
// }

// void	sort_short_list(t_int_list **stack_a, t_int_list **stack_b, int len)
// {
// 	size_t	i;
// (void)len;
// 	i = 0;
// 	while (!check_pushed_units(stack_a))
// 	{
// 		if ((*stack_a)->index < 10)
// 		{
// 			push_b(stack_a, stack_b);
// 			sort_b(stack_b, i);
// 			i++;
// 		}
// 		else
// 			rotate_a(stack_a);
// 	}
// 	// sort_units(&stack_b);
// }

void	sort_list(t_int_list **stack_a, t_int_list **stack_b, int len)
{
	(void)len;
	(void)stack_b;
	if (is_sorted(stack_a))
		return ;
	if (len < 3)
		sort_3_list(stack_a, len);
	// else if (len < 10)
	else
		sort_10_list(stack_a, stack_b, len);
	// if (len < 100)
	// 	sort_short_list(stack_a, stack_b, len);
}
