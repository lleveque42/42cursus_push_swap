/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:30:03 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/23 11:09:34 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

static void	ft_free(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return ;
}

static size_t	word_count(char const *s)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i] != '\0' && ((s[i] >= 7 && s[i] <= 13) || s[i] == 32))
		i++;
	while (s[i] != '\0')
	{
		count++;
		while (s[i] != '\0' && !((s[i] >= 7 && s[i] <= 13) || s[i] == 32))
			i++;
		while (s[i] != '\0' && ((s[i] >= 7 && s[i] <= 13) || s[i] == 32))
			i++;
	}
	return (count);
}

static size_t	word_len(char const *s, size_t	i)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[i] != '\0' && ((s[i] >= 7 && s[i] <= 13) || s[i] == 32))
		i++;
	while (s[i] != '\0' && !((s[i] >= 7 && s[i] <= 13) || s[i] == 32))
	{
		i++;
		len++;
	}
	return (len);
}

static size_t	ft_strcpy_split(char const *s, char *tab, size_t i)
{
	size_t	j;

	j = 0;
	while (s && s[i] != '\0' && ((s[i] >= 7 && s[i] <= 13) || s[i] == 32))
		i++;
	while (s && s[i] != '\0' && !((s[i] >= 7 && s[i] <= 13) || s[i] == 32))
	{
		tab[j] = s[i];
		j++;
		i++;
	}
	tab[j] = '\0';
	return (i);
}

char	**ft_split(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	w;
	char	**tab;

	i = 0;
	j = 0;
	w = word_count(s);
	tab = malloc(sizeof(char *) * (w + 1));
	if (!tab)
		return (NULL);
	while (j < w)
	{
		tab[j] = malloc(sizeof(char) * (word_len(s, i) + 1));
		if (!tab[j])
		{
			ft_free(tab);
			return (NULL);
		}
		i = ft_strcpy_split(s, tab[j], i);
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
