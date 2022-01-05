/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:14:53 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/04 18:07:46 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap_func(t_int_list *lst)
{
	int	tmp;

	if (lst && lst->next)
	{
		tmp = lst->content;
		lst->content = lst->next->content;
		lst->next->content = tmp;
		return (1);
	}
	return (0);
}

void	swap_a(t_int_list *lst)
{
	if (swap_func(lst))
		ft_putstr("sa\n");
}

void	swap_b(t_int_list *lst)
{
	if (swap_func(lst))
		ft_putstr("sb\n");
}

void	swap_s(t_int_list *stack_a, t_int_list *stack_b)
{
	int	bool;

	bool = 0;
	if (swap_func(stack_a))
		bool += 1;
	if (swap_func(stack_b))
		bool += 1;
	if (bool)
		ft_putstr("ss\n");
}
