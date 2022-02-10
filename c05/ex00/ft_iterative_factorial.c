/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:18:48 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/10 13:41:39 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (n == 0)
		return (1);
	else
	{
		while (nb > 0)
		{
			reusilt = result * nb;
			nb--;
		}
		return (result);
	}
}
