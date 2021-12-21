/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:52:16 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/21 10:07:43 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_int_list	**parse_input(char **char_tab)
{
	size_t		len;
	int			*int_tab;
	t_int_list	**stack_a;

	len = 0;
	while (char_tab[len])
		len++;
	if (check_int(char_tab) || check_atoi(char_tab))
		return (ft_free_char(char_tab));
	int_tab = parse_input_in_tab(char_tab, len);
	if (check_double(int_tab, len))
		return (ft_free_error(char_tab, int_tab));
	stack_a = parse_input_in_stack_a(int_tab, len);
	free(int_tab);
	return (stack_a);
}

int	main(int ac, char **av)
{
	char		**char_tab;
	t_int_list	**stack_a;
	t_int_list	**stack_b;

	if (ac != 2)
		return (0);
	if (check_num(av[1]))
		return (1);
	char_tab = ft_split(av[1]);
	if (!char_tab)
		return (1);
	stack_a = parse_input(char_tab);
	stack_b = create_stack_b(char_tab);
	if (stack_a)
	{
		t_int_list	**tmp;
		tmp = stack_a;
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
		ft_free_char(char_tab);
		ft_free_lst(stack_a);
	}
	return (0);
}