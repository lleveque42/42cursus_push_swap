/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:52:16 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/17 22:40:12 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_error(void)
{
	ft_printf("%s\n", "Error");
	return (1);
}

t_ll_list	**parse_input(char *s)
{
	char 		**char_tab;
	long long	*ll_tab;
	t_ll_list	**lst;
	size_t		len;
	size_t		i;

	len = 0;
	i = 0;
	char_tab = ft_split(s);
	if (check_ll(char_tab) || check_atoi(char_tab))
		return (NULL);
	while (char_tab[len])
		len++;
	ll_tab = parse_input_in_tab(char_tab, len);
	if (check_double(ll_tab, len))
		return (NULL);
	lst = parse_input_in_lst(ll_tab, len);
	free(char_tab);
	free(ll_tab);
	return (lst);
	// return (lst);
	// // int	i = 0;
	// ft_printf("TEST INT TAB\n");
	// // while (tab[i] != -0)
	// // {
	// 	ft_printf("%lld\n", tab[i]);
	// 	i++;
	// }
	// if (check_input_error(tab))
		// return (1);
}

int	main(int ac, char **av)
{
	t_ll_list	**lst;

	if (ac != 2)
		return (ft_error());
	if (check_num(av[1]))
		return (1);
	lst = parse_input(av[1]);
	return (0);
}