/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:16:35 by lleveque          #+#    #+#             */
/*   Updated: 2021/11/29 23:47:53 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	n_cpy;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n_cpy = n * -1;
		ft_putnbr_fd(n_cpy, fd);
	}
	else
	{
		n_cpy = n;
		if (n_cpy > 9)
			ft_putnbr_fd(n_cpy / 10, fd);
		ft_putchar_fd((n_cpy % 10) + 48, fd);
	}
}
