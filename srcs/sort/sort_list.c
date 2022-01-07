/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 05:17:38 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/07 17:01:04 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_list(t_stack **stack_a, t_stack **stack_b, int len)
{
	(void)len;
	(void)stack_b;
	if (is_sorted(stack_a))
		return ;
	if (len < 3)
		sort_3_list(stack_a, len);
	else if (len < 10)
		sort_10_list(stack_a, stack_b, len);
	else
		sort_long_list(stack_a, stack_b, len);
}
