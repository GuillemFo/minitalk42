/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:11:56 by gforns-s          #+#    #+#             */
/*   Updated: 2023/10/10 13:36:25 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"


int	binary_to_ascii(int signal)
{
	int		pos;
	char	result;
	int		power;

	power = 1;
	result = 0;
	pos = 7;
	while (pos >= 0)
	{
		if (signal == SIG_1)
			result += power;
		power *= 2;
		pos--;
	}
	return (result);
}


int	main(void)
{
	pid_t	pid;

	pid = getpid();
	printf("server\n");
	printf("Process ID:%d\n", pid);
	signal(SIG_0, binary_to_ascii)
	ft_printf(binary_to_ascii());
	while (1)
		sleep(1);
	return (0);
}

/*

//print process id and start listening ?


int	kill(pid_t pid, int sig)
{
	
}


//get ready to recive bits and be able to print it? 
*/




