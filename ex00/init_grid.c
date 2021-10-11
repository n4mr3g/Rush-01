/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiccion <gpiccion@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:51:41 by gpiccion          #+#    #+#             */
/*   Updated: 2021/10/11 13:27:50 by gpiccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/* 
	Each pointer / array of ints is 8 bytes of size.
	That's why we allocate 4 * 8 for the grid.
	Each integer is 4 bytes of size, 
	that's why we allocate 4 * 4 in each grid[i].
*/
int	**init_grid(void)
{
	int	i;
	int	**grid;

	i = 0;
	grid = malloc(8 * 4);
	while (i < 4)
	{
		grid[i] = malloc(4 * 4);
		i++;
	}
	return (grid);
}
