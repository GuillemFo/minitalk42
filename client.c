/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:46:01 by gforns-s          #+#    #+#             */
/*   Updated: 2023/10/10 13:03:47 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	return_error(void)
{
	ft_printf("Error/n");
	return (0);
}

int	ascii_to_binary(pid_t pid)
{
	int		i;
	int		pos;
	char	chr;

	chr = 'c';
	pos = 7;
	while (pos >= 0)
	{
		i = (chr >> pos & 1);
		if (i == 1)
			kill(pid, SIG_1);
		else
			kill(pid, SIG_0);
		pos--;
		usleep(20);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	int		test;

	pid = ft_atoi(argv[1]);
	if (argc < 2 || argc > 3)
		return (return_error());
	test = ascii_to_binary(pid);
	return (0);
}

// crear funcion que mande 0 o 1 al server

// argv 2 is already bits so only need to send 1 by one

// send info to server through process id in bits??
/*
int	kill(pid_t pid, int sig)// pid (ARGV) sig = text ascii to binary??
{

}
*/

/*

*/