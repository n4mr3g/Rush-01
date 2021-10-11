/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiccion <gpiccion@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:22:42 by gpiccion          #+#    #+#             */
/*   Updated: 2021/10/11 13:25:07 by gpiccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert_array(int *int_arr, char *arr)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (arr[i] != '\0')
	{
		if ('1' <= arr[i] && arr[i] <= '4')
		{
			int_arr[counter] = arr[i] - '0';
			counter++;
		}
		i++;
	}
}
