/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:46:01 by gforns-s          #+#    #+#             */
/*   Updated: 2023/10/11 11:35:32 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ascii_to_binary(pid_t pid, char chr)
{
	int		i;
	int		pos;

	pos = 7;
	while (pos >= 0)
	{
		i = (chr >> pos) & 1;
		if (i == 0)
		{
			if (kill(pid, SIG_0) == -1)
				return (ft_printf("Error, Wrong PID\n"), -1);
		}
		else
		{
			if (kill(pid, SIG_1) == -1)
				return (ft_printf("Error, Wrong PID\n"), -1);
		}
		pos--;
		usleep(100);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	char	*text;
	int		z;

	z = 0;
	if (argc < 2 || argc > 3)
		return (ft_printf("Error. Wrong ammount of arguments\n"));
	pid = ft_atoi(argv[1]);
	if (!argv[2])
		return (ft_printf("Error. Empty text\n"));
	text = argv[2];
	if (text[0] == '\0')
		return (ft_printf("Error. Empty text\n"));
	while (text[z] != '\0')
	{
		if (ascii_to_binary(pid, text[z]) == -1)
			return (1);
		z++;
	}
	return (0);
}
