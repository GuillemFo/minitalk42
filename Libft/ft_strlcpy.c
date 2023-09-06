/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:57:50 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/19 14:38:08 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlen(const char *var)
{
	size_t	count;

	count = 0;
	while (var[count] != '\0')
		count++;
	return (count);
}*/

size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize)
{
	size_t	i;
	size_t	z;

	z = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return ((unsigned long)z);
	if (dst == 0 || src == 0)
		return ((unsigned long)z);
	while (i < dstsize -1 && i < z)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((unsigned long)z);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dst[]	= "";
	char	src[]	= "hola";
	size_t	dstsize = 0;

	printf("%lu\n", strlcpy(dst, src, dstsize));
	printf("%s\n", dst);
	printf("%lu\n", ft_strlcpy(dst, src, dstsize));
	printf("%s\n", dst);
}
*/