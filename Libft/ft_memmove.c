/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:12:08 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/12 12:45:34 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_protectoverlapunder(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	i = 0;
	while (i < len)
	{
		dst1[i] = src1[i];
		i++;
	}
}

static void	ft_protectoverlapupper(void *dst, const void *src, size_t len)
{
	while (len > 0)
	{
		*((char *)dst + len - 1) = *((char *)src + len - 1);
		len--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	i = 0;
	if (dst == src || len == 0)
		return (dst);
	if (src < dst)
	{
		ft_protectoverlapupper(dst, src, len);
	}
	else
	{
		ft_protectoverlapunder(dst, src, len);
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	unsigned char	src[] = "hola";
	unsigned char	dst[] = "tarde";
	size_t			len = 3;

	printf("%s\n", ft_memmove(src +2, src, len));
}
*/