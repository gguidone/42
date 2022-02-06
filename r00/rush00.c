/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:23:10 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/06 11:52:44 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		maxx;
	int		maxy;

	maxx = x;
	maxy = y;
	while (y > 0)
	{
		x = maxx;
		while (x > 0)
		{	
			if ((y == maxy && x == maxx) || (y == maxy && x == 1))
				ft_putchar('o');
			else if ((x == maxx && y == 1) || (x == 1 && y == 1))
				ft_putchar('o');
			else if ((y == maxy) || (y == 1))
				ft_putchar('-');
			else if (x == maxx || x == 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			x--;
		}
		ft_putchar('\n');
		y--;
	}
}
