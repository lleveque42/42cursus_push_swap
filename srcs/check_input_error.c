/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_error.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:19:27 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/15 14:14:44 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_num(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (!(ft_isdigit(s[i]) || (s[i] >= 7 && s[i] <= 13) || s[i] == ' '
				|| s[i] == '+'  || s[i] == '-'))
		{
			ft_printf("%s\n", "Error");
			return (1);
		}
		i++;
	}
	return (0);
}

// int	check_double(char **tab)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	while (tab[i])
// 	{
// 		while (tab[j] && i != j)
// 		{
// 			if (ft_strcmp)
// 		}
// 	}
// }

int	check_atoi(char **tab)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (tab[i] != NULL)
	{
		j = 0;
		if (tab[i][j] == '+' || tab[i][j] == '-')
			j++;
		if (!tab[i][j])
		{
			ft_printf("%s\n", "Error1");
			return (1);
		}
		while (tab[i][j] && ft_isdigit(tab[i][j]))
			j++;
		if (tab[i][j] != '\0')
		{
			ft_printf("%s\n", "Error2");
			return (1);
		}
		i++;
	}
	return (0);
}

// int	check_int(char **tab)
// {

// }

int	check_input_error(char **char_tab)
{
	if (!char_tab)
		return (0);
	if (check_atoi(char_tab))
		return (1);
	// else if (check_int(char_tab))
		// return (1);
	else
		return (0);
}
