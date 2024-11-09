/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:46:10 by canguyen          #+#    #+#             */
/*   Updated: 2024/08/20 19:44:04 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;

	ft_div_mod(3, 2, &a, &b);
	if (a == 1 && b == 1)
	{
		write(1, "OK", 2);
	}
	else
	{
		write(1, "KO", 2);
	}
}*/
