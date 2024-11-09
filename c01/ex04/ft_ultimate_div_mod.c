/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:24:32 by canguyen          #+#    #+#             */
/*   Updated: 2024/08/20 19:48:42 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	if (a == 1 && b == 1)
	{
		write(1, "OK", 2);
	}
	else
	{
		write(1, "KO", 2);
	}
}*/
