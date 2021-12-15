/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:58:48 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/08 21:33:55 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putlstr(char *s)
{
	int	i;

	if (!s)
	{
		i = ft_putlstr("(null)");
		return (i);
	}
	i = 0;
	while (s && s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}
