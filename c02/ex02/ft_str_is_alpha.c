/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:20:21 by canguyen          #+#    #+#             */
/*   Updated: 2024/08/21 15:35:58 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((96 < str[i] && str[i] < 123) || (64 < str[i] && str[i] < 91))
		{
			i++;
		}	
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_alpha("aAzZ"));
}*/
