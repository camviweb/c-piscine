/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:59:05 by canguyen          #+#    #+#             */
/*   Updated: 2024/09/04 18:39:27 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	test;

	test = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (test < nb && test <= 46340)
	{
		if (nb % test == 0)
		{
			return (0);
		}
		else if (nb == test * test)
		{
			return (test);
		}
		test++;
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_sqrt(atoi(argv[1])));
}
