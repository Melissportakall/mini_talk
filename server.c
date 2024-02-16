/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:33:02 by mportaka          #+#    #+#             */
/*   Updated: 2024/02/12 15:33:06 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <unistd.h>
#include <signal.h>

void	ft_calculate(int signal)
{
	static int	bit = 128;
	static int	c = 0;

	if (signal == SIGUSR1)
		c += bit;
	bit /= 2;
	if (bit == 0)
	{
		ft_putchar(c);
		bit = 128;
		c = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_putstr("Your server pid: ");
	ft_putnbr(pid);
	ft_putchar('\n');
	signal(SIGUSR1, ft_calculate);
	signal(SIGUSR2, ft_calculate);
	while (42)
		pause();
}
