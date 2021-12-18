/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 17:32:41 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/18 18:09:46 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free_lst(t_int_list **lst)
{
	t_int_list	**tmp;
	printf("lst = %p\n", &(*lst)->next);
	printf("lst prev = %p\n", &(*lst)->prev);
	printf("lst prev prev = %p\n", &(*lst)->prev->prev);
	tmp = lst;
	printf("tmp = %p\n", &(*tmp)->next);
	printf("tmp prev = %p\n", &(*tmp)->prev);
	printf("tmp prev prev = %p\n", &(*tmp)->prev->prev);
	while (tmp)
	{
		if (((*tmp)->prev))
			free((*tmp)->prev);
		if (!((*tmp)->next))
		{
			free(tmp);
			break;
		}
		else
			tmp = &(*tmp)->next;
	printf("tmp = %p\n", &(*tmp)->next);
	}
	free(lst);
}

void	ft_free_char(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}