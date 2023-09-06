/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:46:01 by gforns-s          #+#    #+#             */
/*   Updated: 2023/09/06 17:59:56 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"\

int	main(int argc, char **argv)
{
	pid_t	pid;

	pid = ft_atoi(argv[1]);
	if (argc < 3)
	{
		write(1, "Error", 5);
		return (0);
	}
	kill(pid, SIGUSR1);
	printf("test:%d\n", pid);
	printf("client\n");
	return (0);
}



//send info to server through process id in bits??
/*
int	kill(pid_t pid, int sig)// pid (ARGV) sig = text ascii to binary??
{
	
}
*/