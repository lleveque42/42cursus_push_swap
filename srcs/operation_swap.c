/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:14:53 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/22 17:28:39 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_int_list *lst)
{
	int	tmp;

	if (lst && lst->next)
	{
		tmp = lst->content;
		lst->content = lst->next->content;
		lst->next->content = tmp;
		ft_printf("%s\n", "sa");
	}
}

void	swap_b(t_int_list *lst)
{
	int	tmp;

	if (lst && lst->next)
	{
		tmp = lst->content;
		lst->content = lst->next->content;
		lst->next->content = tmp;
		ft_printf("%s\n", "sb");
	}
}

void	swap_s(t_int_list *stack_a, t_int_list *stack_b)
{
	int	tmp;
	int	bool;

	bool = 0;
	if (stack_a && stack_a->next)
	{
		tmp = stack_a->content;
		stack_a->content = stack_a->next->content;
		stack_a->next->content = tmp;
		bool += 1;
	}
	if (stack_b && stack_b->next)
	{
		tmp = stack_b->content;
		stack_b->content = stack_b->next->content;
		stack_b->next->content = tmp;
		bool += 1;
	}
	if (bool)
		ft_printf("%s\n", "ss");
}