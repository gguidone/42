/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:22:44 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/08 14:34:32 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(char c)
{
	write(1, &c, 1);
}

char convert(char c)
{
	if ( c < 10)
		return (c + 48);
	else if ( c < 16 )
		return (c + 87);
	else
	{	
		converti(c \ 10);
		converti(c % 10);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != 0)
	{
		if (*str < 32)
		{
			print('\\');
			print(convert(*str));
		}
		str++;
	}
}
