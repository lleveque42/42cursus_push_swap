/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:09:37 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/01 18:15:32 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*f_lst;

	if (!f || !lst)
		return (NULL);
	f_lst = NULL;
	while (lst)
	{
		new = ft_lstnew(lst -> content);
		if (!new)
		{
			ft_lstclear(&f_lst, del);
			return (NULL);
		}
		new -> content = f(new -> content);
		ft_lstadd_back(&f_lst, new);
		lst = lst -> next;
	}
	return (f_lst);
}
