/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:15:35 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/08 11:18:09 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int val)
{
	if (val >= 0 && val <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = '-255';
	printf("%d\n", ft_isascii(a));
}*/
