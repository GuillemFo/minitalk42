/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:42:46 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/08 14:58:36 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *var, int c)
{
	int	i;

	i = 0;
	while (var[i] != '\0' && var[i] != (char) c)
		i++;
	if (var[i] != (char) c)
		return (0);
	if ((char) c == '\0')
		return ((char *)&var[i]);
	return ((char *) &var[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	const char a[] = "hola buenas tardes";
	int c = 'o';
	ft_strchr(a, c);
}*/
