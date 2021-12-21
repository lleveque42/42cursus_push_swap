/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:14:53 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/21 15:28:52 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_int_list **lst)
{
	int	tmp;

	if ((*lst) && (*lst)->next)
	{
		tmp = (*lst)->content;
		(*lst)->content = (*lst)->next->content;
		(*lst)->next->content = tmp;
		ft_printf("%s\n", "sa");
	}
}

void	swap_b(t_int_list **lst)
{
	int	tmp;

	if ((*lst) && (*lst)->next)
	{
		tmp = (*lst)->content;
		(*lst)->content = (*lst)->next->content;
		(*lst)->next->content = tmp;
		ft_printf("%s\n", "sb");
	}
}

void	swap_s(t_int_list **stack_a, t_int_list **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
	ft_printf("%s\n", "ss");
}