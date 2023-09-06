/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:04:17 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/02 15:30:13 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*news;

	i = 0;
	news = malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!news)
		return (NULL);
	while (s[i] != '\0')
	{
		news[i] = f(i, s[i]);
		i++;
	}
	news[i] = '\0';
	return (news);
}
/*
int	main(void)
{
	char *s
	char *f 

}
*/