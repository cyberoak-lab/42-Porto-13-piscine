/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serach_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 21:32:03 by antmanue          #+#    #+#             */
/*   Updated: 2025/03/13 21:32:05 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char	**argv)
{
	int	i;
	
	if (argc == 4)
		{
			if (argv[2][1] == '\0' && argv[3][1] == '\0' )
				{
				i = 0;
				while (argv[1][i] != '\0')
					{
						if (argv[1][i] == argv[2][0])
						{
							argv[1][i] = argv[3][0];
						}
					write(1, &argv[1][i], 1);	
					i++;
					}
				}
		}
	write(1, "\n", 1);
}
