/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input_funct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:14:54 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/17 11:44:59 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long	ft_atoll(char *nb)
{
	int				i;
	int				sign;
	unsigned long long		result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nb[i] >= 7 && nb[i] <= 13) || nb[i] == 32)
		i++;
	if (nb[i] == '-' || nb[i] == '+')
	{
		if (nb[i] == '-')
			sign = -1;
		i++;
	}
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		result = result * 10 + (nb[i] - 48);
		i++;
	}
	return (sign * result);
}

long long	*parse_input_in_tab(char **char_tab, size_t len)
{
	size_t	i;
	long long	*int_tab;

	i = 0;
	int_tab = malloc(sizeof(long long) * len);
	if (!int_tab)
		return (0);
	while (i < len)
	{
		int_tab[i] = ft_atoll(char_tab[i]);
		i++;
	}
	return (int_tab);
}