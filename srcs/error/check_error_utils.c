/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 19:03:43 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/07 17:00:19 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_putstr_error(void)
{
	char	*s;
	size_t	i;

	s = "Error\n";
	i = 0;
	while (s[i])
	{
		write(2, &s[i], 1);
		i++;
	}
}

int	ft_check_error(void)
{
	ft_putstr_error();
	return (1);
}

void	*ft_error(void)
{
	ft_putstr_error();
	return (NULL);
}

int	check_int_min_and_max(char *s)
{
	int			i;
	long long	result;
	int			int_max;

	i = 0;
	result = 0;
	int_max = 2147483647;
	if (s[i] && (s[i] == '-' || s[i] == '+'))
		i++;
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - 48);
		i++;
	}
	if (s[0] == '-' && (result - 1) > int_max)
		return (1);
	else if (s[0] != '-' && result > int_max)
		return (1);
	return (0);
}
