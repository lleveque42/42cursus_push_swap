/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_join.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:51:33 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/21 19:21:28 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free_tab(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

size_t	tab_len(char **tab)
{
	size_t	i;

	i = 0;
	if (tab)
	{
		while (tab[i] != NULL)
			i++;
	}
	return (i);
}

char	**ft_tab_join(char **tab, char **tab2)
{
	size_t	i;
	size_t	j;
	char	**dest;

	i = 0;
	j = 0;
	if (!tab && !tab2)
		return (NULL);
	dest = malloc(sizeof(char *) * (tab_len(tab) + tab_len(tab2) + 1));
	if (!dest)
		return (NULL);
	while (tab && tab[i] != NULL)
	{
		dest[i] = ft_strdup(tab[i]);
		i++;
	}
	while (tab2 && tab2[j] != NULL)
	{
		dest[j + i] = ft_strdup(tab2[j]);
		j++;
	}
	dest[i + j] = NULL;
 	if (tab)
		ft_free_tab(tab);
	return (dest);
}
