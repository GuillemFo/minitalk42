/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:43:24 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/10 14:25:37 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	ft_intchar(long int nb)
{
	unsigned char	c;

	c = (nb % 10) + 48;
	return (c);
}

static long int	ft_countdigits(long int nb)
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

char	*ft_itoa(int n)
{
	long int		nb;
	char			*s;
	long int		z;

	nb = n;
	z = ft_countdigits(nb);
	if (nb < 0)
		nb = nb * -1;
	s = malloc ((z + 1) * sizeof(char));
	if (!s)
		return (NULL);
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
	return (s);
}
/*

int	main(void)
{
	printf("%s\n", ft_itoa(-12321323));
}
*/