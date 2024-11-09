/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:37:30 by canguyen          #+#    #+#             */
/*   Updated: 2024/08/29 16:45:26 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i++;
		while ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123) \
				|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i] > 64 && str[i] < 91)
				str[i] += 32;
			i++;
		}
		while ((str[i] > 31 && str[i] < '0') || (str[i] > '9' && str[i] < 'A') \
				|| (str[i] > 'Z' && str[i] < 'a') \
				|| (str[i] > 'z' && str[i] < 127) \
				|| (str[i] > 8 && str[i] < 11))
			i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "salut,		comment tu v\nas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}*/
