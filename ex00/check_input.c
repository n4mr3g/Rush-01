/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpiccion <gpiccion@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:12:38 by gpiccion          #+#    #+#             */
/*   Updated: 2021/10/11 13:28:28 by gpiccion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_input(char *inp)
{
	int	i;

	i = 0;
	while (inp[i])
	{
		if (i > 31)
			return (0);
		if (i % 2 == 0)
		{
			if (!('1' <= inp[i] && inp[i] <= '4'))
				return (0);
		}
		else
		{
			if (inp[i] != ' ')
				return (0);
		}
		i++;
	}
	if (i == 31)
		return (1);
	return (0);
}
