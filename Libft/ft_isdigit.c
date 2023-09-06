/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:43:18 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/08 11:11:11 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int val)
{
	if (val >= '0' && val <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = '1';
	printf("%d\n", ft_isdigit(a));
}*/
