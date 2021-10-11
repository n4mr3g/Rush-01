/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraints.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiccion <gpiccion@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:42:22 by gpiccion          #+#    #+#             */
/*   Updated: 2021/10/11 13:35:51 by gpiccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_clue_r(int x, int y, int **grid, int *clues)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = -1;
	count = 0;
	if (x != 3)
		return (1);
	while (i >= 0)
	{
		if (grid[y][i] > max)
		{
			max = grid[y][i];
			count++;
		}
		i--;
	}
	if (count != clues[12 + y])
		return (0);
	return (1);
}

int	check_row_clue_l(int x, int y, int **grid, int *clues)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = -1;
	count = 0;
	while (i <= x)
	{
		if (grid[y][i] > max)
		{
			max = grid[y][i];
			count++;
		}
		if (count > clues[8 + y])
			return (0);
		i++;
	}
	if (count != clues[8 + y] && x == 3)
		return (0);
	return (1);
}

int	check_col_clue_u(int x, int y, int **grid, int *clues)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = -1;
	count = 0;
	while (i <= y)
	{
		if (grid[i][x] > max)
		{
			max = grid[i][x];
			count++;
		}
		if (count > clues[x])
			return (0);
		i++;
	}
	if (count != clues[x] && y == 3)
		return (0);
	return (1);
}

int	check_col_clue_d(int x, int y, int **grid, int *clues)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = -1;
	count = 0;
	if (y != 3)
		return (1);
	while (i >= 0)
	{
		if (grid[i][x] > max)
		{
			max = grid[i][x];
			count++;
		}
		i--;
	}
	if (count != clues[4 + x])
		return (0);
	return (1);
}

int	check_number_repetition(int x, int y, int **grid)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (grid[y][i] == grid[y][x])
			return (0);
		i++;
	}
	i = 0;
	while (i < y)
	{
		if (grid[i][x] == grid[y][x])
			return (0);
		i++;
	}
	return (1);
}
