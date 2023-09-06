/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:20:38 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/08 15:10:44 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *var, int c)
{
	int	i;

	i = ft_strlen(var);
	while (i >= 0)
	{
		if (var[i] == (char) c)
			return ((char *)&var[i]);
		i--;
	}
	return (0);
}
