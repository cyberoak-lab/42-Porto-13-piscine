/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:45:32 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/01 16:45:37 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char	*dest, char	*src, unsigned int n);
/*
int	ft_atoi(char	*strtonum)
{
	int	i;
	int	neg;
	int	res;
	
	i = 0;
	//neg = 0;
	res = 0;
	//while ((strtonum[i] >= 9 && strtonum[i] <= 13) || (strtonum[i] == 32))
	//{
	//	i++;
	//}
	while (strtonum[i] != '\0')
	{ 
		if (strtonum[i] >= '0' && strtonum[i] <= '9')
		{
			res= res*10 + (strtonum[i] - '0');
			i++;
		}
	}	
	return(res);
}
*/

char	*ft_strncpy(char	*dest, char	*src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(int	argc, char	**argv)//(void)
{
	if (argc == 2)
	{
	int	n;
	char	*source;
	char	destin[255];
	
	source = argv[1];
	//n = ft_atoi(argv[2]);
	n = 2;
	printf ("Numero de caracteres copiados:" "%i\n", n);
	printf ("Caracteres copiados: %s\n", ft_strncpy(destin, source, n));
	}
	else
	{
	printf ("Erro: Introduza uma frase entre aspas para ser copiada \n");
	printf ("e de seguida numero de caracteres que pretende copiar!\n");
	}
}*/
