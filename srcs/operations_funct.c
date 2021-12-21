/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_funct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:14:53 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/21 10:20:33 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_lst(t_int_list **lst)
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

void	push_lst(t_int_list **lst)
{

}

void	rotate_lst(t_int_list **lst)
{

}

void	reverse_rotate_lst(t_int_lst **lst)
{

}
