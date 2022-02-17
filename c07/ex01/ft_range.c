/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:27:40 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/17 12:32:28 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	size(int min, int max)
{
	if (min >= max)
		return (0);
	else 
		return (max - min);
}

int	*ft_range(int min, int max)
{
	int *arr;
	int	i;

	i = 0;
	arr = malloc(size(min, max));
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

