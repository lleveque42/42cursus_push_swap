/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:46:06 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/07 16:59:49 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*ft_int_lstnew(int content, void *prev)
{
	t_stack	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->prev = prev;
	new->content = content;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void	ft_int_lstadd_front(t_stack **alst, t_stack *new)
{
	if (!new || !alst)
		return ;
	new -> next = *alst;
	*alst = new;
}
