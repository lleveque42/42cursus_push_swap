/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:46:06 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/21 18:51:54 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_int_list	*ft_int_lstnew(int content, void *prev)
{
	t_int_list	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->prev = prev;
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_int_lstadd_front(t_int_list **alst, t_int_list *new)
{
	if (!new || !alst)
		return ;
	new -> next = *alst;
	*alst = new;
}
