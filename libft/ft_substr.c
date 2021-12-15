/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:37:18 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/30 14:53:53 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	malloc_size(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
		return (i);
	while (s[start] && i < len)
	{
		start++;
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*dest;

	if (!s)
		return (NULL);
	size = malloc_size(s, start, len);
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	i = 0;
	if (!(start > ft_strlen(s)))
	{
		while (s[start] && i < size)
		{
			dest[i] = s[start];
			i++;
			start++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
