/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 23:15:08 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/29 15:35:30 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set && set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	len_cpy(char const *s1, char const *set, size_t	i, size_t start)
{
	size_t	len;

	len = 0;
	while (s1[i])
	{
		i++;
		len++;
	}
	i--;
	while (is_in_set(s1[i], set) && i >= start)
	{
		len--;
		i--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	len;
	char	*dest;

	i = 0;
	if (!s1)
		return (NULL);
	while (is_in_set(s1[i], set))
		i++;
	start = i;
	len = len_cpy(s1, set, i, start);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[start + i] && i < len)
	{
		dest[i] = s1[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
