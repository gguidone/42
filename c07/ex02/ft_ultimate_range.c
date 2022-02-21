/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:34:13 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/17 14:19:48 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		arr = 0;
		return (0);
	}
	if (!(arr = malloc(sizeof(int) * (max - min))))
			return (-1);
	while (min < max)
	{
		arr[i] = min;
		min ++;
		i++;
	}
	*range = arr;
	return (i);
}

