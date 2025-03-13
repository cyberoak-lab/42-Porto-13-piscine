/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:35:27 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/05 12:35:30 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str);

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}
/*
#include <stdio.h>
int	main(int argc, char	**argv)
{
	if(argc == 2)
	{
	ft_putstr(argv[1]);
	}
	else
	{
	printf ("Please insert only a string between double \n");
	printf ("quotes unless it has just one word!!!\n");
	}
}*/
