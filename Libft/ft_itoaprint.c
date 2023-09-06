/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoaprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:43:24 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/15 12:38:14 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printitoa(char *s)
{
	int	test;

	test = 0;
	test = ft_string(s);
	if (test == -1)
		return (-1);
	return (test);
}

unsigned char	ft_intchar(long int nb)
{
	unsigned char	c;

	c = (nb % 10) + 48;
	return (c);
}

long int	ft_countdigits(long int nb)
{
	long int	i;

	i = 0;
	if (nb <= 0)
		++i;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	ft_itoaprint(int n)
{
	long int		nb;
	char			*s;
	long int		z;
	int				test;

	nb = n;
	z = ft_countdigits(nb);
	if (nb < 0)
		nb = nb * -1;
	s = malloc ((z + 1) * sizeof(char));
	if (!s)
		return (-1);
	s[z] = '\0';
	z--;
	while (z + 1 > 0)
	{
		s[z] = ft_intchar(nb);
		nb /= 10;
		z--;
	}
	if (n < 0)
		s[0] = '-';
	test = printitoa(s);
	free (s);
	return (test);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoaprint(0));
}
*/