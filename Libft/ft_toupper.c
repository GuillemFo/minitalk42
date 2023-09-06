/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:51:49 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/10 14:02:02 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int val)
{
	if (val >= 97 && val <= 122)
		return (val -32);
	else
		return (val);
}
/*
int	main(void)
{
	char puto;

	puto = '3';
	ft_toupper(puto);
}*/
