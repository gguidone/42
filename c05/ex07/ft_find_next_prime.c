/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:16:26 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/15 17:30:52 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	search_prime(int nb, int div)
{
	if (nb < 0)
		nb = -nb;
	if (nb == div)
		return (1);
	else if (nb % div == 0)
		return (0);
	else
		return (search_prime(nb, div + 1));
}

int	ft_find_next_prime(int nb)
{
	if (search_prime(nb, 2))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
