/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 00:02:12 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/04 00:02:34 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char	*dest, char	*src);

char	*ft_strcat(char	*dest, char	*src)
{
	int	l;
	int	i;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(int	argc,char	**argv)
{
	if (argc == 3)
	{
	printf ("%s\n", ft_strcat(argv[1], argv[2]));
	}
	else
	{
	printf ("Input Error: Please insert only two strings each ");
	printf ("string separated by SPACE and between double quotes!!!\n");
	}
}*/
