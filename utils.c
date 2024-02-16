/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportaka <mportaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:32:54 by mportaka          #+#    #+#             */
/*   Updated: 2024/02/12 15:32:57 by mportaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char k)
{
	write(1, &k, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int	ft_atoi(char *s)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (s[i] >= 48 && s[i] <= 57)
	{
		res *= 10;
		res += s[i] - 48;
		i++;
	}
	return (res);
}
