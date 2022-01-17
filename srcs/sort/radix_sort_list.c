/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:07:10 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/12 11:36:21 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	radix_sort_list(t_stack **stack_a, t_stack **stack_b, int len)
{
	int	max_bit;
	int	i;
	int	j;

	max_bit = 0;
	i = 0;
	while ((len >> max_bit) != 0)
		max_bit++;
	while (i < max_bit)
	{
		j = 0;
		while (j <= len)
		{
			if ((((*stack_a)->index >> i) & 1) == 0)
				push_b(stack_a, stack_b);
			else
				rotate_a(stack_a);
			j++;
		}
		while (*stack_b)
			push_a(stack_b, stack_a);
		i++;
	}
}
