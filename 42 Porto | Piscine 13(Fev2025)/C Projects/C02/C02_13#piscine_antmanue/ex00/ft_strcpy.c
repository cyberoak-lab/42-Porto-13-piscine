/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:06:52 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/01 16:06:56 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char	*src);

char	*ft_strcpy(char	*dest, char	*src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(int argc, char	**argv)
{
	if (argc == 2)
	{
	char	*source;
	char	destin[255];

	source = argv[1];

	printf ("Fonte: %s\n", source);
	ft_strcpy(destin, source);
	printf ("Destino: %s\n", destin);
	}
	else
	printf ("Please insert a valid string between double quotes\n"); 
	return (0);
}*/
