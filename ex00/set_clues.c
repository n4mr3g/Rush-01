/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_clues.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiccion <gpiccion@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:34:03 by gpiccion          #+#    #+#             */
/*   Updated: 2021/10/11 13:28:43 by gpiccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*set_clues(int argc, int **argv)
{
	int	i;
	int	*clues;

	i = 0;
	while (i < argc)
	{
		clues = malloc(8);
		clues[i] = *argv[i] - '0';
		i++;
	}
	return (clues);
}
