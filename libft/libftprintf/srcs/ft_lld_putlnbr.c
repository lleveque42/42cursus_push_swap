/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lld_putlnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:31:59 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/16 18:01:23 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_lld_putlnbr(long long n)
{
	int						len;
	unsigned long long	n_cpy;
	char	*base;

	len = 0;
	base = "0123456789";
	n_cpy = n;
	if (n < 0)
	{
		ft_putchar('-');
		n_cpy = n * -1;
	}
	if (n_cpy > 9)
		len += ft_lld_putlnbr(n_cpy / 10);
	len += ft_putchar(base[n_cpy % 10]);
	return (len);
}