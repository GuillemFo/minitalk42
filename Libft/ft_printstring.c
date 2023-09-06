/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:15:27 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/15 12:18:42 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(char *s)
{
	int	i;

	if (!s)
		return (write(1, "(null)", 6));
	i = 0;
	while (s[i] != '\0')
	{
		if (write (1, &s[i], 1) == -1)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_char(int s)
{
	if (write(1, &s, 1) == -1)
		return (-1);
	return (1);
}
