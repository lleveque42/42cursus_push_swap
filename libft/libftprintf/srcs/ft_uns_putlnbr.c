/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_putlnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:54:17 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/08 19:47:31 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_uns_putlnbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_uns_putlnbr(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}
