/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:27:53 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/04 19:22:35 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_with_next(t_int_list **src, t_int_list **dst)
{
	*src = (*src)->next;
	if (!*dst)
	{
		*dst = (*src)->prev;
		(*dst)->next = NULL;
	}
	else
	{
		(*dst)->prev = (*src)->prev;
		(*dst)->prev->next = *dst;
		*dst = (*dst)->prev;
	}
	(*src)->prev = NULL;
}

void	push_without_next(t_int_list **src, t_int_list **dst)
{
	if (!*dst)
	{
		*dst = *src;
		(*dst)->next = NULL;
	}
	else
	{
		(*dst)->prev = *src;
		(*dst)->prev->next = *dst;
		*dst = (*dst)->prev;
	}
	*src = NULL;
}

void	push_a(t_int_list **src, t_int_list **dst)
{
	if (*src)
	{
		if ((*src)->next)
			push_with_next(src, dst);
		else if (!(*src)->next)
			push_without_next(src, dst);
		ft_putstr("pa\n");
	}
}

void	push_b(t_int_list **src, t_int_list **dst)
{
	if (*src)
	{
		if ((*src)->next)
			push_with_next(src, dst);
		else if (!(*src)->next)
			push_without_next(src, dst);
		ft_putstr("pb\n");
	}
}
