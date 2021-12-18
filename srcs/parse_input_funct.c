/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input_funct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:14:54 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/18 18:24:16 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*parse_input_in_tab(char **char_tab, size_t len)
{
	size_t	i;
	int	*int_tab;

	i = 0;
	int_tab = malloc(sizeof(int) * len);
	if (!int_tab)
		return (0);
	while (i < len)
	{
		int_tab[i] = ft_atoi(char_tab[i]);
		i++;
	}
	return (int_tab);
}

t_int_list	*ft_int_lstnew(int content)
{
	t_int_list	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_int_list	**parse_input_in_lst(int *tab, size_t len)
{
	size_t		i;
	t_int_list	**lst;
	t_int_list	*tmp;

	lst = malloc(sizeof(*lst) * len);
	if (len > 0)
	{
		(*lst) = ft_int_lstnew(tab[0]);
		(*lst)->prev = NULL;
	}
	if (len > 1)
	{
		(*lst)->next = ft_int_lstnew(tab[1]);
		tmp = (*lst)->next;
		tmp->prev = &(**lst);
		i = 2;
		tmp = (*lst)->next;
		while (i < len)
		{
			tmp->next = ft_int_lstnew(tab[i]);
			tmp->next->prev = tmp;
			tmp = tmp->next;
			i++;
			if (i == (len - 1))
				tmp->next = NULL;
		}
	}
	else
		(*lst)->next = NULL;
	return (lst);
}