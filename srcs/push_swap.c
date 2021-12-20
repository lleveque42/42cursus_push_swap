/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:52:16 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/20 12:59:08 by lleveque         ###   ########.fr       */
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
	t_int_list	**stack_a;
	size_t		len;

	len = 0;
	char_tab = ft_split(s);
	if (check_int(char_tab) || check_atoi(char_tab))
		return (ft_free_char(char_tab));
	while (char_tab[len])
		len++;
	int_tab = parse_input_in_tab(char_tab, len);
	if (check_double(int_tab, len))
		return (ft_free_error(char_tab, int_tab));
	stack_a = parse_input_in_stack_a(int_tab, len);
	ft_free_char(char_tab);
	free(int_tab);
	return (stack_a);
}

int	main(int ac, char **av)
{
	t_int_list	**stack_a;
	// t_int_list	**stack_b;

	if (ac != 2)
		return (0);
	if (check_num(av[1]))
		return (1);
	stack_a = parse_input(av[1]);
	// stack_b = create_stack_b;
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
		ft_free_lst(stack_a);
	}
	return (0);
}