/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 21:52:32 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/13 21:52:34 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_strlen(char	*str1)
{
	int	i;
	
	i = 0;
	while(str1[i])
		i++;
		
	return(i);

}

int main(int argc, char **argv)
{
	int c1;
	int c2;
	int match;
	
	c1 = 0;
	c2 = 0;
	match = 0;
	
	
	if (argc == 3)
	{
		while (argv[1][c1] != '\0')
		{
			while (argv[2][c2] != '\0')
				{
					if (argv[1][c1] == argv[2][c2])
						{
							match++;
							break
						}
					c2++;
				}
			c1++;
		}
		if (match == ft_strlen(argv[1]))
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
}
