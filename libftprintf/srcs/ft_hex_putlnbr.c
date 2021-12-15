/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_putlnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:02:29 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/09 11:35:19 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_hex_putlnbr(unsigned int n, char c)
{
	int		len;
	char	*base_x;
	char	*base_upperx;

	len = 0;
	base_x = "0123456789abcdef";
	base_upperx = "0123456789ABCDEF";
	if (n > 15)
		len += ft_hex_putlnbr(n / 16, c);
	if (c == 'x')
		len += ft_putchar(base_x[n % 16]);
	else
		len += ft_putchar(base_upperx[n % 16]);
	return (len);
}
