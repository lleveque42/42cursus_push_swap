/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 05:17:04 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/07 19:01:09 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	is_in_second_part(t_stack **lst, int i)
{
	size_t	len;
	size_t	j;

	len = get_list_size(lst);
	j = 0;
	while (j <= (len / 2))
	{
		if ((*lst)->index == i)
			return (0);
		lst = &(*lst)->next;
		j++;
	}
	return (1);
}

int	get_highest(t_stack **lst)
{
	int	i;
	int	highest;

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

int	get_lowest(t_stack **lst)
{
	int	i;
	int	lowest;

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

int	is_sorted(t_stack **lst)
{
	while (*lst)
	{
		if ((*lst)->next && (*lst)->index != ((*lst)->next->index - 1))
			return (0);
		lst = &(*lst)->next;
	}
	return (1);
}
