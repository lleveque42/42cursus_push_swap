/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_putlptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:50:23 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/09 12:07:32 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_hex_putlptr(unsigned long long int n)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (n > 15)
		len += ft_hex_putlptr(n / 16);
	len += ft_putchar(base[n % 16]);
	return (len);
}
