/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:12:35 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/10 14:01:31 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkprint(va_list argv, char str)
{
	int	test;

	test = 0;
	if (str == '%')
		test = ft_char ('%');
	else if (str == 'i' || str == 'd')
		test = ft_itoaprint (va_arg (argv, int));
	else if (str == 'c')
		test = ft_char (va_arg (argv, int));
	else if (str == 's')
		test = ft_string (va_arg (argv, char *));
	else if (str == 'u')
		test = ft_u (va_arg (argv, unsigned int));
	else if (str == 'x')
		test = ft_hex(va_arg (argv, unsigned int));
	else if (str == 'X')
		test = ft_hexcap(va_arg (argv, unsigned int));
	else if (str == 'p')
		test = ft_ptr (va_arg (argv, unsigned long));
	return (test);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	int		test;
	va_list	argv;

	test = 0;
	i = 0;
	count = 0;
	va_start(argv, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			test = ft_checkprint(argv, str[i +1]);
			i++;
		}
		else
			test = ft_char (str[i]);
		if (test == -1)
			return (-1);
		count += test;
		i++;
	}
	va_end(argv);
	return (count);
}

/*
#include <stdio.h>

int	main(void)
{
	int i = 0;

	printf("%p", &i);
	printf("\n");
	ft_printf("%p", &i);
}
*/

/*
///////////////////

%d, %i - numeros
%x %X  - hexadecimal
%c - caracter
%s - stringg
%p - puntero
%u unsigned int
%% %t %e %l

printf("numero: %d, nombre: %s", edad, nombre)


if (d o i)
else if(x o X)
else if (s)
else if (c)
else (write caracter de despues de %)
*/