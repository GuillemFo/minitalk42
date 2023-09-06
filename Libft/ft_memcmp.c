/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:43:57 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/11 17:38:03 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	i = 0;
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while (i < n)
	{
		if (s11[i] != s22[i])
			return (s11[i] - s22[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	unsigned char	s1[] = "hola";
	unsigned char	s2[] = "holc";
	size_t			n = 4;	

	printf("%d\n", memcmp(s1, s2, n));
	printf("%d\n", ft_memcmp(s1, s2, n));
}*/