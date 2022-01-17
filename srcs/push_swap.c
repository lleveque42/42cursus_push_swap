/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:52:16 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/17 14:32:55 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	print_lst(t_stack **stack_a, t_stack **stack_b)
// {
// 	t_stack	**tmp;
// 	t_stack	**tmp2;

// 	tmp = stack_a;
// 	tmp2 = stack_b;
// 	printf("\n-----------------\n");
// 	printf("|   a   |   b   |\n");
// 	printf("-----------------\n");
// 	while ((*tmp) != NULL || (*tmp2) != NULL)
// 	{
// 		if ((*tmp))
// 		{
// 			printf("| %d [%d]", (*tmp)->content, (*tmp)->index);
// 			tmp = &(*tmp)->next;
// 		}
// 		else
// 			printf("|    ");
// 		printf(" | ");
// 		if ((*tmp2))
// 		{
// 			printf("%d [%d] |", (*tmp2)->content, (*tmp2)->index);
// 			tmp2 = &(*tmp2)->next;
// 		}
// 		else
// 			printf("      |");
// 		printf("\n");
// 	}
// 	printf("-----------------\n\n");
// }

t_stack	*parse_input(char **char_tab)
{
	size_t	len;
	int		*int_tab;
	t_stack	*stack_a;

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
	char	**char_tab;
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		len;

	if (ac < 2)
		return (0);
	char_tab = parse_arg_in_tab(av);
	if (!char_tab)
		return (1);
	if (!char_tab[1])
		return (0);
	stack_a = parse_input(char_tab);
	stack_b = NULL;
	if (stack_a)
	{
		len = put_index(&stack_a);
		sort_list(&stack_a, &stack_b, len);
		ft_free_char(char_tab);
		ft_free_lst(&stack_a);
	}
	return (0);
}
