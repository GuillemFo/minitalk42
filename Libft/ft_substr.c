/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:51:32 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/28 19:20:44 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	nlen;

	nlen = 0;
	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	nlen = ft_strlen(s) - start;
	if (nlen > len)
		nlen = len;
	substr = malloc(nlen + 1 * sizeof(char));
	if (!substr)
		return (NULL);
	while (i < nlen && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s[20] = "hola buenas tardes";
	int		start = 5;
	size_t	len = 7;

	printf("%s\n", ft_substr(s, start, len));
}
*/

/*
	char	*ptr;
	size_t	i;
	
	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	ptr = malloc (ft_strlen(s) - start + 1 * sizeof(char *));
	if (!ptr)
		return (NULL);
	if (len > ft_strlen(s)) //recortar hasta maximo de memoria alocado.
		len = ft_strlen(s) - start + 1;
	while (i < len || )
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
*/