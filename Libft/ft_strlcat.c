/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:03:09 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/15 11:46:25 by gforns-s         ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstl;
	size_t	srcl;
	size_t	i;

	i = 0;
	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (dstsize == 0)
		return (dstsize + srcl);
	if (dstl < dstsize)
	{
		while ((dstl + i) < dstsize -1 && src[i] != '\0')
		{
			dst[dstl + i] = src[i];
			i++;
		}
		if (i > 0)
			dst[dstl + i] = '\0';
		return (srcl + dstl);
	}
	return (srcl + dstsize);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[20] 	= "esto es un";
	char	src[5] 	 	= "hola";
	char	dst2[20] 	= "esto es un";
	char	src2[5] 	= "hola";
	size_t 	dstsize	 	= 4;

	printf("%lu\n", strlcat(dst, src, dstsize));
	printf("%s\n", dst);
	printf("%lu\n", ft_strlcat(dst2, src2, dstsize));
	printf("%s\n", dst2);
}
*/