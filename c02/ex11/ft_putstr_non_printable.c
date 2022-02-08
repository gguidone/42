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

void	print(char c)
{
	write(1, &c, 1);
}

void	split(char c)
{
	if ( c < 10)
		print(c + 48);
	else if (c < 16)
		print(c + 87);		
}
void	convert(char c)
{
	if ( c < 10)
	{
		print('0');
		print(c + 48);
	}
	else if ( c < 16 )
	{
		print('0');
		print(c + 87);
	}
	else
	{	
		char	a;
		char	b;

		a = c / 16;
		b = c % 16;
		if (a != 0)
		{
			a = a % 16;
			split(a);
			split(b);	
		}
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != 0)
	{
		if (*str < 32)
		{
			print('\\');
			convert(*str);
		}
		else 
			print(*str);
		str++;
	}
}
int main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return 0;
}