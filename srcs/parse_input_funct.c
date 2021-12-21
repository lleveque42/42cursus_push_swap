/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input_funct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:14:54 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/21 18:33:55 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

char	**parse_arg_in_tab(char **av)
{
	size_t	i;
	char	**to_join;
	char	**char_tab;

	i = 1;
	char_tab = NULL;
	while (av[i])
	{
		if (check_num(av[i]))
			return (NULL);
		i++;
	}
	i = 1;
	while (av[i])
	{
		to_join = ft_split(av[i]);
		if (!to_join)
			return (ft_free_error(char_tab, NULL));
		char_tab = ft_tab_join(char_tab, to_join);
		i++;
		ft_free_char(to_join);
	}
	return (char_tab);
}

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

t_int_list	*parse_input_in_stack_a(int *tab, size_t len)
{
	size_t		i;
	t_int_list	*lst;
	t_int_list	*tmp;

	lst = malloc(sizeof(lst) * len);
	if (len > 0)
		lst = ft_int_lstnew(tab[0], NULL);
	if (len > 1)
	{
		lst->next = ft_int_lstnew(tab[1], &(*lst));
		i = 2;
		tmp = lst->next;
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
		lst->next = NULL;
	return (lst);
}
