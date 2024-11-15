/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:48:09 by canguyen          #+#    #+#             */
/*   Updated: 2024/08/20 19:45:33 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h> 

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	ft_swap(&a, &b);
	if (b == 0 && a == 1)
	{
		write(1, "OK", 2);
	}
	else
	{
		write(1, "KO", 2);
	}
}*/
