/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:53:58 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/25 13:25:27 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_check(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*s3;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_check(s1[i], set) == 1)
		i++;
	if (i == ft_strlen(s1))
		return (ft_strdup(""));
	while (ft_check(s1[j], set) == 1)
		j--;
	s3 = ft_substr(s1, i, (j - i) + 1);
	return (s3);
}

/*
int	main(void)
{
	char s1[14] = "hola alo aloh";
	char set[5] = "hola";
	printf("%s\n", ft_strtrim(s1, set));
}
*/
