/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:33:14 by mportaka          #+#    #+#             */
/*   Updated: 2024/02/12 15:33:16 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <unistd.h>
#include <signal.h>

void	bit_sends(int pid, char a)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if ((a >> bit) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit--;
		usleep(142);
	}
}

int	check_union(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] < 0)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	if (argc != 3)
	{
		ft_putstr("Enter 2 argument\n");
		return (0);
	}
	i = 0;
	pid = ft_atoi(argv[1]);
	if (!check_union(argv[2]))
	{
		while (argv[2][i])
		{
			bit_sends(pid, argv[2][i]);
			i++;
		}
		bit_sends(pid, '\n');
	}
	else
		ft_putstr("Unicode fail!\n");
	return (0);
}
