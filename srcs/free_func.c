/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 17:32:41 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/21 19:22:37 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_free_char(char **tab)
{
	size_t	i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			free(tab[i]);
			i++;
		}
		free(tab);
	}
	return (NULL);
}

void	*ft_free_error(char **char_tab, int *int_tab)
{
	if (char_tab)
		ft_free_char(char_tab);
	if (int_tab)
		free(int_tab);
	return (NULL);
}

void	ft_free_lst(t_int_list **lst)
{
	while (*lst)
	{
		if ((*lst)->prev)
			free((*lst)->prev);
		if (!((*lst)->next))
		{
			free(*lst);
			break;
		}
		else
			*lst = (*lst)->next;
	}
	free(lst);
}
