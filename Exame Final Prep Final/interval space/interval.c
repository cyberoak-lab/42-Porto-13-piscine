/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:28:49 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/06 14:28:51 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
char	interval(char *str)
{
	int	i;
	int	j;
	
	i = 0;
	j = 1;

	if (i == 0)
		write(1, &str[i], 1);
	while(str[j] != '\0')
	{
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		write(1, &str[j], 1);
		j++;
	}
	
		
	return (str[i]);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		interval(argv[1]);
		write(1, "\n", 1);
	}
	else
	{
	write(1, "\n", 1);
	}
}

