/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:30:10 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/09 09:58:57 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dst;
	size_t			i;

	i = 0;
	dst = (unsigned char *)b;
	while (i < len)
	{
		dst[i] = c;
		i++;
	}
	return (dst);
}
