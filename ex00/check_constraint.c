/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_constraint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiccion <gpiccion@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:44:06 by gpiccion          #+#    #+#             */
/*   Updated: 2021/10/11 12:26:22 by gpiccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_number_repetition(int x, int y, int **grid);
int		check_row_clue_r(int x, int y, int **grid, int *clues);
int		check_row_clue_l(int x, int y, int **grid, int *clues);
int		check_col_clue_u(int x, int y, int **grid, int *clues);
int		check_col_clue_d(int x, int y, int **grid, int *clues);
int		check_constraint(int x, int y, int **grid, int *clues);

/*	 	
		Checks for invalid possibilities.
		Returns 0 if it's wrong, 1 if it's correct.
*/
int	check_constraint(int x, int y, int **grid, int *clues)
{
	if (!check_number_repetition(x, y, grid))
		return (0);
	if (!check_row_clue_r(x, y, grid, clues))
		return (0);
	if (!check_row_clue_l(x, y, grid, clues))
		return (0);
	if (!check_col_clue_u(x, y, grid, clues))
		return (0);
	if (!check_col_clue_d(x, y, grid, clues))
		return (0);
	return (1);
}
