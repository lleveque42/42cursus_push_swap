/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:21:53 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/15 19:38:53 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putlstr(char *s);
int	ft_putlnbr(int n);
int	ft_uns_putlnbr(unsigned int n);
int	ft_hex_putlnbr(unsigned int n, char c);
int	ft_hex_putlptr(unsigned long long int n);
int	ft_lld_putlnbr(long long int n);

#endif
