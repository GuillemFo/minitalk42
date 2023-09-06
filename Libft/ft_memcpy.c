/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:41:26 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/09 12:57:58 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (src == 0 && dst == 0)
		return (NULL);
	while (i < n && (*((unsigned char *)src + i) != '\0'
			|| *((unsigned char *)dst + i) != '\0'))
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dst);
}
