/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 05:17:04 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/07 15:53:44 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int    get_chunk_size(int size)
{
	int	chunk_size;

	if (size < 10)
		chunk_size = size;
	else if (size < 25)
		chunk_size = 25 / 3;
	else if (size < 50)
		chunk_size = 50 / 4;
	else if (size < 100)
		chunk_size = 100 / 5;
	else if (size < 200)
		chunk_size = 200 / 7;
	else if (size < 300)
		chunk_size = 300 / 9;
	else if (size < 400)
		chunk_size = 400 / 11;
    else if (size < 500)
		chunk_size = 500 / 13;
	else
		chunk_size = size / 20;
	return (chunk_size);
}

int	get_list_size(t_int_list **lst)
{
	int	i;

	i = 0;
	while (*lst)
	{
		lst = &(*lst)->next;
		i++;
	}
	return (i);
}

int is_chunk_in_first_part(t_int_list **lst, int chunk_begin, int chunk_end)
{
	size_t	len;
	size_t j;

	len = get_list_size(lst);
	j = 0;
	while (j <= (len / 2 + 3))
	{
		if ((*lst)->index >= chunk_begin && (*lst)->index <= chunk_end)
			return (1);
		lst = &(*lst)->next;
		j++;
	}
	return (0);
}

int is_in_second_part(t_int_list **lst, int i)
{
	size_t	len;
	size_t j;

	len = get_list_size(lst);
	j = 0;
	while (j <= (len / 2 + 2))
	{
		if ((*lst)->index == i)
			return (0);
		lst = &(*lst)->next;
		j++;
	}
	return (1);
}

int	get_highest(t_int_list **lst)
{
	int			i;
	int			highest;

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

int	is_sorted(t_int_list **lst)
{
	while (*lst)
	{
		if ((*lst)->next && (*lst)->index != ((*lst)->next->index - 1))
			return (0);
		lst = &(*lst)->next;
	}
	return (1);
}
