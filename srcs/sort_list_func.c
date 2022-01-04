/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 05:17:04 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/26 06:02:25 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_highest(t_int_list **lst)
{
	int			i;
	int 		highest;

	i = 0;
	while (*lst)
	{
		if (i)
		{
			if ((*lst)->content > highest)
				highest = (*lst)->content;
		}
		else
				highest = (*lst)->content;
		lst = &(*lst)->next;
		i++;
	}
	return (highest);
}

int	get_lowest(t_int_list **lst)
{
	int	i;
	int lowest;

	i = 0;
	while (*lst)
	{
		if (i)
		{
			if ((*lst)->content < lowest)
				lowest = (*lst)->content;
		}
		else
				lowest = (*lst)->content;
		lst = &(*lst)->next;
		i++;
	}
	return (lowest);
}

int	is_sorted(t_int_list **lst)
{
	while (*lst)
	{
		if ((*lst)->next && (*lst)->content > (*lst)->next->content)
			return (1);
		lst = &(*lst)->next;
	}
	return (0);
}
