/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:54:17 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/09 10:37:02 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putlnbr(int n)
{
	int				len;
	unsigned int	n_cpy;

	len = 0;
	n_cpy = n;
	if (n < 0)
	{
		len += ft_putchar('-');
		n_cpy = n * -1;
	}
	if (n_cpy > 9)
		len += ft_putlnbr(n_cpy / 10);
	len += ft_putchar((n_cpy % 10) + '0');
	return (len);
}
