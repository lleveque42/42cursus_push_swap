/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_error.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:19:27 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/15 10:29:03 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	check_alpha(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
	while (s[i])
	{
		if (is_alpha(s[i]))
			return (1);
		i++;
	}
	return (0);
}

int	check_double(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		while (s[j])
	}
}

int	check_atoi(char *s)
{

}

int	check_int(char *s)
{

}

int	check_input_error(char *s)
{
	if (!s)
		return (0);
	if (check_alpha(s))
		return (1);
	else if (check_double(s))
		return (1);
	else if (check_atoi(s))
		return (1);
	else if (check_int(s))
		return (1);
	else
		break;
	return (0);
}
