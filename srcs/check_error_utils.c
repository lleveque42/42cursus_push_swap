/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:03:43 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/17 11:35:45 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <limits.h>

int	ft_check_error(void)
{
	ft_printf("%s\n", "Error");
	return (1);
}

int	check_ll_min_and_max(char *s)
{
	int	i;
	unsigned long long	result;
	unsigned long long	ll_max;

	i = 0;
	result = 0;
	ll_max = 9223372036854775807;
	if (s[i] && (s[i] == '-' || s[i] == '+'))
		i++;
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - 48);
		i++;
	}
	if (s[0] == '-' && (result - 1) > ll_max)
		return (1);
	else if (s[0] != '-' && result > ll_max)
		return (1);
	return (0);
}
