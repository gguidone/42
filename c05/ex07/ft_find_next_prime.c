/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:16:26 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/17 10:48:46 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	search_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (search_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
