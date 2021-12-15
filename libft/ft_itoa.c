/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:43:08 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/29 17:28:34 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	n_len(long n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	n_cpy;
	size_t	len;
	char	*tab;

	n_cpy = n;
	len = n_len(n_cpy);
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	tab[len] = '\0';
	len--;
	if (n < 0)
	{
		n_cpy = n_cpy * -1;
		tab[0] = '-';
	}
	while (n_cpy > 9)
	{
		tab[len] = n_cpy % 10 + 48;
		n_cpy = n_cpy / 10;
		len--;
	}
	tab[len] = n_cpy % 10 + 48;
	return (tab);
}
