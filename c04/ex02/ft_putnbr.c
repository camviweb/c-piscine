/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:29:46 by canguyen          #+#    #+#             */
/*   Updated: 2024/09/04 15:59:29 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
		ft_putnbr(nb);
	}
	else if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

/*#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr(atoi(argv[1]));
}*/
