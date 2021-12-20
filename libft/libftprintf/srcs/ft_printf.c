/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:36:57 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/20 12:43:52 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	what_arg(char c, va_list arg)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = ft_putchar(va_arg(arg, int));
	else if (c == 's')
		len = ft_putlstr(va_arg(arg, char *));
	else if (c == 'i' || c == 'd')
		len = ft_putlnbr(va_arg(arg, int));
	else if (c == 'u')
		len = ft_uns_putlnbr(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		len = ft_hex_putlnbr(va_arg(arg, unsigned int), c);
	else if (c == 'p')
	{
		len = ft_putlstr("0x");
		len += ft_hex_putlptr(va_arg(arg, unsigned long long int));
	}
	else if (c == '%')
		len = ft_putchar('%');
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	size_t	i;
	int		len;

	va_start(arg, s);
	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[i + 1])
				len += what_arg(s[i + 1], arg);
			i++;
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
