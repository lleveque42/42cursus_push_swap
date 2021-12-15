/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:52:16 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/15 14:42:33 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	int *tab;
	(void)ac;

	if (check_num(av[1]))
		return (1);
	tab = parse_input_in_tab(av[1]);
	if (!tab)
		return (1);
	int	i = 0;
	ft_printf("TEST INT TAB\n");
	while (tab[i] != '\0')
	{
		ft_printf("%d\n", tab[i]);
		i++;
	}
	// if (check_input_error(tab))
		// return (1);
	return (0);
}