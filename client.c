/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:46:01 by gforns-s          #+#    #+#             */
/*   Updated: 2023/09/06 18:38:39 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"\

int return_error(void)
{
	ft_printf("Error/n");
	return (-1);
}


int	check_if_digit_only(int argc, char *argv)
{



}


int	main(int argc, char **argv)
{
	pid_t	pid;
	int error;

	error = check_if_digit_only(argc, argv[1]);
	if (error == 1)
		return (return_error);	
	pid = ft_atoi(argv[1]);
	if (argc < 3)
		return (return_error);
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