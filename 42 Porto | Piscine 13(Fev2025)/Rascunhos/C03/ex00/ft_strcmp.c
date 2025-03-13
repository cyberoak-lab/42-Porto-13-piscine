/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:34:33 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/03 10:34:39 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	cmp;

	cmp = 0;
	while (s1[cmp] != '\0' && s2[cmp] != '\0')
	{
		if (s1[cmp] == s2[cmp])
		{
			cmp++;
		}
		else
		{
			return (s1[cmp] - s2[cmp]);
		}
	}
	return (s1[cmp] - s2[cmp]);
}
/*
//MAIN 1
#include <string.h>
#include <stdio.h>
int	main(int	argc, char	**argv)
{
	if (argc == 3)
	{
	char	*string1;
	char	*string2;
	
	string1 = argv[1];
	string2 = argv[2];
	//printf ("%i\n", strcmp(string1, string2));
	printf ("%i\n", ft_strcmp(string1, string2));
	}
	else
	{
	printf ("Input String Error:\n");
	printf ("Please insert two string to compare, each string must\n");
	printf ("be in double quotes separated by a SPACE unless they have\n"); 
	printf ("just one word!\n");
	}
}
MAIN 2
int	main(void)
{
	char	*string1;
	char	*string2;
	
	string1 = "ole";
	string2 = "ola";
	//printf ("%i\n", strcmp(string1, string2));
	printf ("%i\n", ft_strcmp(string1, string2));
	}
	else
	{
	printf ("Input String Error:\n");
	printf ("Please insert two string to compare, each string must\n");
	printf ("be in double quotes separated by a SPACE unless they have\n"); 
	printf ("just one word!\n");
	}
}*/
