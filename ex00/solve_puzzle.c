/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_puzzle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiccion <gpiccion@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:32:56 by gpiccion          #+#    #+#             */
/*   Updated: 2021/10/11 13:25:40 by gpiccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		solve_recursive(int x, int y, int **grid, int *clues);
int		**init_grid(void);
void	print_grid(int **solved_grid);

void	solve_puzzle(int *clues)
{
	int	solved_grid;
	int	**grid;

	grid = init_grid();
	solved_grid = solve_recursive(0, 0, grid, clues);
	if (!solved_grid)
		write(1, "Error\n", 6);
	else
		print_grid(grid);
	free(grid);
}
