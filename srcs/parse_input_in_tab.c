/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input_in_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:14:54 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/15 14:43:42 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int *parse_input_in_tab(char *s)
{
	size_t	i;
	char **char_tab;
	int	*int_tab;

	i = 0;
	if (!s)
		return (0);
	char_tab = ft_split(s, ' ');
	while (char_tab[i])
	{
		ft_printf("%s\n", char_tab[i]);
		i++;
	}
	int_tab = malloc(sizeof(int) * i) + 1;
	if (!int_tab)
		return (0);
	i = 0;
	if (check_atoi(char_tab))
		return (NULL);
	while (char_tab[i] != NULL)
	{
		int_tab[i] = ft_atoi(char_tab[i]);
		i++;
	}
	free(char_tab);
	return (int_tab);
}