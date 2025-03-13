/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:07:30 by antmanue          #+#    #+#             */
/*   Updated: 2025/02/27 17:07:42 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char	*str);

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(int argc, char **argv)
{

	if (argc == 2)
	{
	int	count;

	count = ft_strlen(argv[1]); 
	
	printf ("Caracteres na frase: %i\n", count);
	}
	else
	printf ("Please insert only a string between double quotes \n");
	return (0);
}*/
