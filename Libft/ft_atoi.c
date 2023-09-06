/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:11:00 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/16 17:16:23 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long			i;
	unsigned char	*str1;
	unsigned int	sign;
	unsigned int	result;

	result = 0;
	i = 0;
	sign = 1;
	str1 = (unsigned char *)str;
	while (str1[i] == ' ' || (str1[i] >= 9 && str1[i] <= 13))
		i++;
	if (str1[i] == '-')
		sign = -1;
	if (str1[i] == '-' || str1[i] == '+')
		i++;
	while (str1[i] >= 48 && str1[i] <= 57)
	{
		result = result * 10 + str1[i] - '0';
		i++;
	}
	return (result * sign);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*str1;

	str 	= "\n--20";
	str1 	= "\n--20";
	printf ("%d\n", atoi(str1));
	printf ("%d\n", ft_atoi(str));

}
*/