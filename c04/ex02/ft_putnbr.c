/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:40:17 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/10 13:14:07 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	n;

	if (nb == -2147483648)
	{
		print('-');
		print('2');
		nb = 1474836647;
	}
	if (nb < 0)
	{
		print('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		n = (nb % 10) + 48;
		print(n);
	}
	else
	{
		n = (nb / 10) + 48;
		print(n);
	}
}	
