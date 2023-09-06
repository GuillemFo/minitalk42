/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:28:30 by gforns-s          #+#    #+#             */
/*   Updated: 2023/07/13 11:23:33 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	*ft_freemalloc(char **s2, int k)
{
	while (k >= 0)
	{
		free(s2[k]);
		k--;
	}
	free(s2);
	return (NULL);
}

int	ft_counter(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	if (s[0] == '\0')
		return (1);
	if (s[0] != c && s[0] != '\0')
		count++;
	i++;
	while (s[i] != '\0')
	{
		while (s[i - 1] == c && s[i] != c)
		{
			count++;
			i++;
		}
		i++;
	}
	return (count);
}

char	**ft_aux(char const *s, char **s2, char c, int k)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			w = 0;
			while (s[i] != c && s[i] != '\0')
			{
				w++;
				i++;
			}
			s2[k] = ft_substr(s, i - w, w);
			if (s2[k] == NULL)
				return (ft_freemalloc(s2, k));
			k++;
		}
	}
	s2[k] = NULL;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	int		k;
	char	**s2;

	k = 0;
	if (s[0] == '\0')
		s2 = malloc(sizeof(char *));
	else
		s2 = malloc((ft_counter(s, c) + 1) * (sizeof(char *)));
	if (!s2 || !s)
		return (NULL);
	s2 = ft_aux(s, s2, c, k);
	return (s2);
}
/*
int	main(void)
{
	char *str = "xxxxxxxxhello!";
	ft_split(str, 'x');
}
*/
/*
int	main()
{
	int	i;
	char	**a;
	char	**b;
	char	**c;
	char	**d;

	i = 0;
	a = ft_split("split  ||this|for|me|||||!|", '|');
	b = ft_split("xxxxxxxxhello!", 'x');
	c = ft_split("  tripouille  42  ", ' ');
	d = ft_split("chinimala", ' ');
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
	i = 0;
	while (b[i])
	{
		printf("%s\n", b[i]);
		i++;
	}
	i = 0;
	while (c[i])
	{
		printf("%s\n", c[i]);
		i++;
	}
	i = 0;
	while (d[i])
	{
		printf("%s\n", d[i]);
		i++;
	}
}
*/

/*
int	main()
{
	printf("%d\n", ft_counter("Hola omo    eee     a", ' '));
}


Hola como estas = str
matriz = 1 "Hola"
		 2 "como"
		 3 "estas"
		 4 NULL

"     Hola      como     estas   " = str
matriz = 1 "Hola"
		 2 "como"
		 3 "estas"
		 4 NULL

"             " = str
matriz = 1 NULL

*/