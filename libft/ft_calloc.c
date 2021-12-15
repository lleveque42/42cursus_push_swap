/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:51:38 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/26 16:14:26 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*out;

	if (size * nmemb > 2147483647)
		return (NULL);
	out = malloc(size * nmemb);
	if (!out)
		return (NULL);
	ft_bzero(out, size * nmemb);
	return (out);
}
