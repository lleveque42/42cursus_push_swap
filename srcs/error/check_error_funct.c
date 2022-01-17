/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_funct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:19:27 by lleveque          #+#    #+#             */
/*   Updated: 2022/01/17 17:00:02 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_num(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (!(ft_isdigit(s[i]) || (s[i] >= 7 && s[i] <= 13) || s[i] == ' '
				|| s[i] == '+' || s[i] == '-'))
			return (ft_check_error());
		i++;
	}
	return (0);
}

int	check_double(int *tab, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (tab[i] == tab[j] && i != j)
				return (ft_check_error());
			j++;
		}
		i++;
	}
	return (0);
}

int	check_atoi(char **tab)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		if (tab[i][j] == '+' || tab[i][j] == '-')
			j++;
		if (!tab[i][j])
			return (ft_check_error());
		while (tab[i][j] && ft_isdigit(tab[i][j]))
			j++;
		if (tab[i][j] != '\0')
			return (ft_check_error());
		i++;
	}
	return (0);
}

size_t	check_len(char *s)
{
	size_t	j;
	size_t	len;

	j = 0;
	len = 0;
	if (s[j] == '-' || s[j] == '+')
		j++;
	while (s[j])
	{
		len++;
		j++;
	}
	return (len);
}

int	check_int(char **tab)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (tab[i])
	{
		len = check_len(tab[i]);
		if (len > 10)
			return (ft_check_error());
		else if (len == 10)
		{
			if (check_int_min_and_max(tab[i]))
				return (ft_check_error());
		}
		i++;
	}
	return (0);
}
