/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleveque <lleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:37:31 by lleveque          #+#    #+#             */
/*   Updated: 2021/12/09 11:02:27 by lleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int	main()
{
	printf("////// TEST %%c //////\n");
	printf("\nLE MIEN :\n");
	printf("len = %d\n", ft_printf("coucou les %c\n", 'l'));
	printf("\nLE VRAI :\n");
	printf("len = %d\n", printf("coucou les %c\n", 'l'));
	ft_printf("\n");

	char *null = NULL;

	printf("////// TEST %%s //////\n");
	printf("\nLE MIEN :\n\n");
	printf("len = %d\n", ft_printf("coucou les %s\n", "loulous"));
	printf("len = %d\n", ft_printf("coucou les %s\n", null));
	printf("\nLE VRAI :\n\n");
	printf("len = %d\n", printf("coucou les %s\n", "loulous"));
	printf("len = %d\n", printf("coucou les %s\n", null));
	ft_printf("\n");

	int test1_id = 2147483647;
	int test2_id = -2147483648;

	ft_printf("////////////////// TEST %%i //////////////////\n");
	printf("\nLE MIEN :\n\n");
	printf("len = %d\n", ft_printf("coucou les %i loulous\n", test1_id));
	printf("len = %d\n", ft_printf("coucou les %i loulous\n", 0));
	printf("\nLE VRAI :\n\n");
	printf("len = %d\n", printf("coucou les %i loulous\n", test1_id));
	printf("len = %d\n", printf("coucou les %i loulous\n", 0));
	ft_printf("\n");

	ft_printf("////////////////// TEST %%d //////////////////\n");
	printf("\nLE MIEN :\n\n");
	printf("len = %d\n", ft_printf("coucou les %d loulous\n", test2_id));
	printf("len = %d\n", ft_printf("coucou les %d loulous\n", 0));
	printf("\nLE VRAI :\n\n");
	printf("len = %d\n", printf("coucou les %d loulous\n", test2_id));
	printf("len = %d\n", printf("coucou les %d loulous\n", 0));
	ft_printf("\n");

	unsigned int test1_u = 2147483648;

	ft_printf("////////////////// TEST %%u //////////////////\n");
	printf("\nLE MIEN :\n\n");
	printf("len = %d\n", ft_printf("coucou les %d loulous\n", test1_u));
	printf("len = %d\n", ft_printf("coucou les %d loulous\n", 0));
	printf("\nLE VRAI :\n\n");
	printf("len = %d\n", printf("coucou les %d loulous\n", test1_u));
	printf("len = %d\n", printf("coucou les %d loulous\n", 0));
	ft_printf("\n");

	int				test1_x = 4294967295;
	unsigned int	test2_x = 2147483628;

	ft_printf("////////////////// TEST %%x //////////////////\n");
	printf("\nLE MIEN :\n\n");
	printf("len = %d\n", ft_printf("coucou les %x loulous\n", test1_x));
	printf("len = %d\n", ft_printf("coucou les %x loulous\n", test2_x));
	printf("len = %d\n", ft_printf("coucou les %x loulous\n", 0));
	printf("\nLE VRAI :\n\n");
	printf("len = %d\n", printf("coucou les %x loulous\n", test1_x));
	printf("len = %d\n", printf("coucou les %x loulous\n", test2_x));
	printf("len = %d\n", printf("coucou les %x loulous\n", 0));
	ft_printf("\n");

	ft_printf("////////////////// TEST %%p //////////////////\n");
	printf("\nLE MIEN :\n\n");
	printf("len = %d\n", ft_printf("coucou les %p loulous\n", &test2_x));
	printf("len = %d\n", ft_printf("coucou les %p %p loulous\n", NULL, NULL));
	printf("\nLE VRAI :\n\n");
	printf("len = %d\n", printf("coucou les %p loulous\n", &test2_x));
	printf("len = %d\n", printf("coucou les %p %p loulous\n", NULL, NULL));
	ft_printf("\n");
}
