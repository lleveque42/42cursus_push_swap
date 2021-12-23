/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:06:35 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/23 11:16:00 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rotate_func(t_int_list **lst)
{
	t_int_list	*tmp;

	if (*lst && (*lst)->next)
	{
		tmp = (*lst);
		(*lst)->next->prev = NULL;
		while ((*lst)->next)
			*lst = (*lst)->next;
		(*lst)->next = tmp;
		tmp->next = NULL;
		tmp->prev = *lst;
		while ((*lst)->prev)
			*lst = (*lst)->prev;
		return (1);
	}
	return (0);
}

void	rotate_a(t_int_list **lst)
{
	if (rotate_func(lst))
		ft_printf("ra\n");
}

void	rotate_b(t_int_list	**lst)
{
	if (rotate_func(lst))
		ft_printf("rb\n");
}

void	rotate_r(t_int_list **stack_a, t_int_list **stack_b)
{
	int	bool;

	bool = 0;
	if (rotate_func(stack_a))
		bool += 1;
	if (rotate_func(stack_b))
		bool += 1;
	ft_printf("rr\n");
}
