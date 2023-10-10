/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:46:01 by gforns-s          #+#    #+#             */
/*   Updated: 2023/10/10 18:09:17 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	return_error(void)
{
	ft_printf("Error\n");
	return (0);
}

int	ascii_to_binary(pid_t pid, char *text, int size)
{
	int		i;
	int		pos;
	char	chr;
	int		z;

	z = 0;
	while (z < size)
	{
		chr = text[z];
		pos = 7;
		while (pos >= 0)
		{
			i = (chr >> pos) & 1;
			if (i == 0)
				kill(pid, SIG_0);
			else
				kill(pid, SIG_1);
			pos--;
			usleep(100);
		}
		z++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	int		test;
	char	*text;
	int		size;

	pid = ft_atoi(argv[1]);
	if (argc < 2 || argc > 3)
		return (return_error());
	text = argv[2];
	size = ft_strlen(text);
	test = ascii_to_binary(pid, text, size);
	return (0);
}