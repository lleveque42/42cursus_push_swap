/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list_func_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:27:44 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/07 19:05:41 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	get_chunk_size(int size)
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

int	get_list_size(t_stack **lst)
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

int	ra_or_rra(t_stack **lst, int ch_begin, int ch_end)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*lst)
	{
		if ((*lst)->index >= ch_begin && (*lst)->index <= ch_end)
			break ;
		i++;
		lst = &(*lst)->next;
	}
	while ((*lst)->next)
		lst = &(*lst)->next;
	while (*lst)
	{
		if ((*lst)->index >= ch_begin && (*lst)->index <= ch_end)
			break ;
		j++;
		lst = &(*lst)->prev;
	}
	if (i <= j)
		return (1);
	return (0);
}
