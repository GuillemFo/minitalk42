/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:11:56 by gforns-s          #+#    #+#             */
/*   Updated: 2023/10/11 10:36:29 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	binary_to_ascii(int signal)
{
	static int		pos = 7;
	static char		result = 0;

	result = result << 1;
	if (signal == SIG_1)
		result = result | 1;
	pos--;
	if (pos < 0)
	{
		pos = 7;
		write(1, &result, 1);
		result = 0;
	}
}

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	ft_printf("Server\n");
	ft_printf("Process ID:%d\n", pid);
	signal(SIG_1, &binary_to_ascii);
	signal(SIG_0, &binary_to_ascii);
	while (1)
		pause ();
	return (0);
}
