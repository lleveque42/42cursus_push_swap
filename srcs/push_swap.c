/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:52:16 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/19 22:58:17 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_error(void)
{
	ft_printf("%s\n", "Error");
	return (1);
}

t_int_list	**parse_input(char *s)
{
	char 		**char_tab;
	int			*int_tab;
	t_int_list	**lst;
	size_t		len;
	size_t		i;

	len = 0;
	i = 0;
	char_tab = ft_split(s);
	if (check_int(char_tab) || check_atoi(char_tab))
		return (ft_free_char(char_tab));
	while (char_tab[len])
		len++;
	int_tab = parse_input_in_tab(char_tab, len);
	if (check_double(int_tab, len))
		return (ft_free_error(char_tab, int_tab));
	lst = parse_input_in_lst(int_tab, len);
	ft_free_char(char_tab);
	free(int_tab);
	return (lst);
}

int	main(int ac, char **av)
{
	t_int_list	**lst;

	if (ac != 2)
		return (0);
	if (check_num(av[1]))
		return (1);
	lst = parse_input(av[1]);
	if (lst)
	{
		t_int_list	**tmp;
		tmp = lst;
		while (tmp)
		{
			if ((*tmp)->next)
				tmp = &(*tmp)->next;
			else
				break;
		}
		while (tmp)
		{
			printf("%d\n", (*tmp)->content);
			if ((*tmp)->prev)
				tmp = &(*tmp)->prev;
			else
				break;
		}
		ft_free_lst(lst);
	}
	return (0);
}