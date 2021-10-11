/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_recursive.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiccion <gpiccion@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:30:33 by gpiccion          #+#    #+#             */
/*   Updated: 2021/10/11 12:28:44 by gpiccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_constraint(int x, int y, int **grid, int *clues);

int	solve_recursive(int x, int y, int **grid, int *clues)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		grid[y][x] = i + 1;
		if (check_constraint(x, y, grid, clues))
		{
			if (x == 3 && y == 3)
				return (1);
			else if (solve_recursive((1 + x) % 4, y + x / 3, grid, clues))
				return (1);
		}
		i++;
	}
	return (0);
}
