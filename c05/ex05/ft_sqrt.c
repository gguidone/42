/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:34:09 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/17 11:33:40 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recsqrt(int nb, int square)
{
	int	n;

	n = square * square;
	if (nb > 214739716)
		return (0);
	if (n == nb)
		return (square);
	else if (n > nb)
		return (0);
	else
		return (recsqrt(nb, square + 1));
}

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = recsqrt(nb, 1);
	return (sqrt);
}
