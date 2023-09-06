/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:41:15 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/14 19:07:31 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int s)
{
	static char	base[16] = "0123456789abcdef";
	int			i;
	int			test;

	test = 0;
	i = 0;
	if (s >= 16)
	{
		test = ft_hex (s / 16);
		if (test == -1)
			return (-1);
		i += test;
		test = ft_hex (s % 16);
		if (test == -1)
			return (-1);
		i += test;
	}
	else
	{
		test = ft_char(base[s]);
		if (test == -1)
			return (-1);
		i += test;
	}
	return (i);
}

int	ft_hexcap(unsigned int s)
{
	static char	base[16] = "0123456789ABCDEF";
	int			i;
	int			test;

	test = 0;
	i = 0;
	if (s >= 16)
	{
		test = ft_hexcap (s / 16);
		if (test == -1)
			return (-1);
		i += test;
		test = ft_hexcap (s % 16);
		if (test == -1)
			return (-1);
		i += test;
	}
	else
	{
		test = ft_char(base[s]);
		if (test == -1)
			return (-1);
		i += test;
	}
	return (i);
}

static int	ft_point(unsigned long s)
{
	static char	base[16] = "0123456789abcdef";
	int			i;
	int			test;

	test = 0;
	i = 0;
	if (s >= 16)
	{
		test = ft_point (s / 16);
		if (test == -1)
			return (-1);
		i += test;
		test = ft_point (s % 16);
		if (test == -1)
			return (-1);
		i += test;
	}
	else
	{
		test = ft_char(base[s]);
		if (test == -1)
			return (-1);
		i += test;
	}
	return (i);
}

int	ft_ptr(unsigned long s)
{
	int	i;
	int	test;

	i = 0;
	test = 0;
	test = write (1, "0x", 2);
	if (test == -1)
		return (-1);
	i += test;
	test = ft_point(s);
	if (test == -1)
		return (-1);
	i += test;
	return (i);
}
