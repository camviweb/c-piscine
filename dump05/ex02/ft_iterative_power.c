/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:15:22 by canguyen          #+#    #+#             */
/*   Updated: 2024/09/04 17:38:08 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	puiss;

	puiss = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		puiss *= nb;
		power--;
	}
	return (puiss);
}

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}
