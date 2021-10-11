/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiccion <gpiccion@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:35:15 by gpiccion          #+#    #+#             */
/*   Updated: 2021/10/11 13:28:59 by gpiccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_grid(int **solved_grid)
{
	int		i;
	int		j;
	char	aux;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			aux = solved_grid[i][j] + '0';
			write(1, &aux, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
