/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:24:32 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/10 15:29:36 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{	
	int	result;

	result = 1;
	if (nb == 0 && power == 0)
		return (0);
	else 
	{
		while (power)
		{
			result = result * nb;
			power--;
		}
	}
`	return (result);
}

