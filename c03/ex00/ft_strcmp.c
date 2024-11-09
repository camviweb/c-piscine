/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:57:03 by canguyen          #+#    #+#             */
/*   Updated: 2024/08/29 13:26:35 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char s1[] = "ToTo";
	char s2[] = "toto";
	char s3[] = "";
	char s4[] = "toto";
	printf("%d, %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("%d, %d\n", ft_strcmp(s3, s2), strcmp(s3, s2));
	printf("%d, %d\n", ft_strcmp(s4, s2), strcmp(s4, s2));
}*/
