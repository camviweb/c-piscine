/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:02:39 by canguyen          #+#    #+#             */
/*   Updated: 2024/09/04 17:29:57 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		fact *= nb;
		nb --;
	}
	return (fact);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_iterative_factorial(atoi(argv[1])));
}
