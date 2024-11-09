/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:46:23 by canguyen          #+#    #+#             */
/*   Updated: 2024/08/19 12:40:00 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(int a, int b)
{
	ft_putchar( a / 10 + 48 ) 































	while (a <= '9')
	{	
		d = a + 1;
		while (d <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d++, 1);
			if (b != '8')
				write(1, ", ", 1);
			d++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
