/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:33:05 by canguyen          #+#    #+#             */
/*   Updated: 2024/08/29 20:06:40 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		while (i < n)
		{
			if (!(s1[i] && s2[i] && (s1[i] == s2[i])))
			{
				return (s1[i] - s2[i]);
			}
			i++;
		}
		i--;
		return (s1[i] - s2[i]);
	}
}

/*int	main(void)
{
	char s1[] = "ha";
	char s2[] = "hc";
	char s3[] = "hb";
	char s4[] = "hy";
	printf("%d, %d\n", ft_strncmp(s1, s2, 1), strncmp(s1, s2, 1));
	printf("%d, %d\n", ft_strncmp(s4, s2, 3), strncmp(s4, s2, 3));
	printf("%d, %d\n", ft_strncmp(s3, s2, 2), strncmp(s3, s2, 2));
	printf("%d, %d\n", ft_strncmp(s2, s1, 0), strncmp(s2, s1, 0));
}*/
