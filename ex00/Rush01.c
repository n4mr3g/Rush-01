/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiccion <gpiccion@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:43:11 by gpiccion          #+#    #+#             */
/*   Updated: 2021/10/11 13:26:54 by gpiccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	solve_puzzle(int *clues);
void	convert_array(int *int_arr, char *arr);
int		check_input(char *inp);

int	main(int argc, char **argv)
{
	int		arr[16];
	char	*clues;

	if (argc != 2)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
	}
	else
	{
		clues = argv[1];
		if (!(check_input(clues)))
		{
			write(1, "Error", 5);
			write(1, "\n", 1);
		}
		else
		{
			convert_array(arr, clues);
			solve_puzzle(arr);
		}
	}
	return (0);
}
