/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulorod <paulorod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:06:14 by paulorod          #+#    #+#             */
/*   Updated: 2023/05/17 16:32:27 by paulorod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	printf("============U Format tests=============\n");
	printf("\n%i\n", ft_printf("[FT] U Format - UINT_MAX: %u", UINT_MAX));
	printf("\n%i\n", printf("[OR] U Format - UINT_MAX: %u", UINT_MAX));
	printf("\n%i\n", ft_printf("[FT] U Format - 0: %u", 0));
	printf("\n%i\n", printf("[OR] U Format - 0: %u", 0));
	printf("\n%i\n", ft_printf("[FT] U Format - negative(-123): %u", -123));
	printf("\n%i\n", printf("[OR] U Format - negative(-123): %u", -123));
	printf("\n%i\n", ft_printf("[FT] U Format - positive(123): %u", 123));
	printf("\n%i\n", printf("[OR] U Format - positive(123): %u", 123));
	printf("============D Format tests=============\n");
	printf("\n%i\n", ft_printf("[FT] D Format - UINT_MAX: %d", UINT_MAX));
	printf("\n%i\n", printf("[OR] D Format - UINT_MAX: %d", UINT_MAX));
	printf("\n%i\n", ft_printf("[FT] D Format - INT_MAX: %d", INT_MAX));
	printf("\n%i\n", printf("[OR] D Format - INT_MAX: %d", INT_MAX));
	printf("\n%i\n", ft_printf("[FT] D Format - INT_MIN: %d", INT_MIN));
	printf("\n%i\n", printf("[OR] D Format - INT_MIN: %d", INT_MIN));
	printf("\n%i\n", ft_printf("[FT] D Format - 0: %d", 0));
	printf("\n%i\n", printf("[OR] D Format - 0: %d", 0));
	printf("\n%i\n", ft_printf("[FT] D Format - negative(-123): %d", -123));
	printf("\n%i\n", printf("[OR] D Format - negative(-123): %d", -123));
	printf("\n%i\n", ft_printf("[FT] D Format - positive(123): %d", 123));
	printf("\n%i\n", printf("[OR] D Format - positive(123): %d", 123));
	printf("============I Format tests=============\n");
	printf("\n%i\n", ft_printf("[FT] I Format - UINT_MAX: %d", UINT_MAX));
	printf("\n%i\n", printf("[OR] I Format - UINT_MAX: %d", UINT_MAX));
	printf("\n%i\n", ft_printf("[FT] I Format - INT_MAX: %d", INT_MAX));
	printf("\n%i\n", printf("[OR] I Format - INT_MAX: %d", INT_MAX));
	printf("\n%i\n", ft_printf("[FT] I Format - INT_MIN: %d", INT_MIN));
	printf("\n%i\n", printf("[OR] I Format - INT_MIN: %d", INT_MIN));
	printf("\n%i\n", ft_printf("[FT] I Format - 0: %d", 0));
	printf("\n%i\n", printf("[OR] I Format - 0: %d", 0));
	printf("\n%i\n", ft_printf("[FT] I Format - negative(-123): %d", -123));
	printf("\n%i\n", printf("[OR] I Format - negative(-123): %d", -123));
	printf("\n%i\n", ft_printf("[FT] I Format - positive(123): %d", 123));
	printf("\n%i\n", printf("[OR] I Format - positive(123): %d", 123));
	printf("============X Format tests=============\n");
	printf("\n%i\n", ft_printf("[FT] X Format - UINT_MAX: %X", UINT_MAX));
	printf("\n%i\n", printf("[OR] X Format - UINT_MAX: %X", UINT_MAX));
	printf("\n%i\n", ft_printf("[FT] X Format - INT_MAX: %X", INT_MAX));
	printf("\n%i\n", printf("[OR] X Format - INT_MAX: %X", INT_MAX));
	printf("\n%i\n", ft_printf("[FT] X Format - INT_MIN: %X", INT_MIN));
	printf("\n%i\n", printf("[OR] X Format - INT_MIN: %X", INT_MIN));
	printf("\n%i\n", ft_printf("[FT] X Format - 0: %X", 0));
	printf("\n%i\n", printf("[OR] X Format - 0: %X", 0));
	printf("\n%i\n", ft_printf("[FT] X Format - negative(-123): %X", -123));
	printf("\n%i\n", printf("[OR] X Format - negative(-123): %X", -123));
	printf("\n%i\n", ft_printf("[FT] X Format - positive(123): %X", 123));
	printf("\n%i\n", printf("[OR] X Format - positive(123): %X", 123));
	printf("\n%i\n", ft_printf("[FT] X Format - bin: %X", 01001));
	printf("\n%i\n", printf("[OR] X Format - bin: %X", 01001));
	printf("============Other tests=============\n");
	printf("\n%i\n", ft_printf("[FT] 2 percentage: %%d", 123));
	printf("\n%i\n", printf("[OR] 2 percentage: %%d", 123));
	printf("\n%i\n", ft_printf("[FT] S Format: hello, %s.", "world"));
	printf("\n%i\n", printf("[OR] S Format: hello, %s.", "world"));
	printf("\n%i\n", ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42, 42, 42, 42, 'B', "-42", -42, -42, -42, -42, 42, 'C', "0", 0, 0, 0, 0, 42, 0));
	printf("\n%i\n", printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42, 42, 42, 42, 'B', "-42", -42, -42, -42, -42, 42, 'C', "0", 0, 0, 0, 0, 42, 0));
	return (0);
}
