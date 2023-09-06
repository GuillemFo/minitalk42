/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:11:56 by gforns-s          #+#    #+#             */
/*   Updated: 2023/09/06 18:57:26 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void tonta(int	signal)
{
	if (signal == SIGUSR1)
		printf("hola\n");
	else if (signal == SIGUSR2)
		printf("adios\n");
}

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	printf("server\n");
	printf("Process ID:%d\n", pid);
	signal(SIGUSR1, tonta);
	signal(SIGUSR2, tonta);
	while (1)
	{
		printf("esperando\n");
		sleep(1);
	}
	return (0);
}

/*
bit to ascii
ascii to binary 

//print process id and start listening ?


int	kill(pid_t pid, int sig)
{
	
}


//get ready to recive bits and be able to print it? 
*/


