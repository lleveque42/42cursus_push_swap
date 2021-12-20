/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input_funct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:14:54 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/20 18:08:57 by lleveque         ###   ########.fr       */
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

t_int_list	**parse_input_in_stack_a(int *tab, size_t len)
{
	size_t		i;
	t_int_list	**lst;
	t_int_list	*tmp;

	lst = malloc(sizeof(*lst) * len);
	if (len > 0)
		(*lst) = ft_int_lstnew(tab[0], NULL);
	if (len > 1)
	{
		(*lst)->next = ft_int_lstnew(tab[1], &(**lst));
		i = 2;
		tmp = (*lst)->next;
		while (i < len)
		{
			tmp->next = ft_int_lstnew(tab[i], tmp);
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

t_int_list	**create_stack_b(char **char_tab)
{
	size_t		len;
	size_t		i;
	t_int_list	**lst;
	t_int_list	*tmp;

	len = 0;
	while (char_tab[len])
		len++;
	lst = malloc(sizeof(lst) * len);
	if (len > 0)
		(*lst) = ft_int_lstnew(0, NULL);
	if (len > 1)
	{
		(*lst)->next = ft_int_lstnew(0, &(**lst));
		i = 2;
		tmp = (*lst)->next;
		while (i < len)
		{
			tmp->next = ft_int_lstnew(0, tmp);
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