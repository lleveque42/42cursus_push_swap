/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:52:16 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/23 11:17:56 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_lst(t_int_list **stack_a, t_int_list **stack_b)
{
	t_int_list	**tmp;
	t_int_list	**tmp2;

	tmp = stack_a;
	tmp2 = stack_b;
	ft_printf("\n---------\n");
	ft_printf("| a | b |\n");
	ft_printf("---------\n");
	while ((*tmp) != NULL || (*tmp2) != NULL)
	{
		if ((*tmp))
		{
			ft_printf("| %d", (*tmp)->content);
			tmp = &(*tmp)->next;
		}
		else
			ft_printf("|  ");
		ft_printf(" | ");
		if ((*tmp2))
		{
			ft_printf("%d |", (*tmp2)->content);
			tmp2 = &(*tmp2)->next;
		}
		else
			ft_printf("  |");
		ft_printf("\n");
	}
	ft_printf("---------\n\n");
}

t_int_list	*parse_input(char **char_tab)
{
	size_t		len;
	int			*int_tab;
	t_int_list	*stack_a;

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
	t_int_list	*stack_a;
	t_int_list	*stack_b;

	if (ac < 2)
		return (0);
	char_tab = parse_arg_in_tab(av);
	if (!char_tab)
		return (1);
	stack_a = parse_input(char_tab);
	stack_b = NULL;
	if (stack_a)
	{
		print_lst(&stack_a, &stack_b);
		push_b(&stack_a, &stack_b);
		push_b(&stack_a, &stack_b);
		push_b(&stack_a, &stack_b);
		push_b(&stack_a, &stack_b);
		print_lst(&stack_a, &stack_b);
		reverse_rotate_a(&stack_a);
		print_lst(&stack_a, &stack_b);
		reverse_rotate_b(&stack_b);
		print_lst(&stack_a, &stack_b);
		reverse_rotate_r(&stack_a, &stack_b);
		print_lst(&stack_a, &stack_b);
		push_a(&stack_b, &stack_a);
		push_a(&stack_b, &stack_a);
		push_a(&stack_b, &stack_a);
		push_a(&stack_b, &stack_a);
		print_lst(&stack_a, &stack_b);
		ft_free_char(char_tab);
		ft_free_lst(&stack_a);
	}
	return (0);
}
