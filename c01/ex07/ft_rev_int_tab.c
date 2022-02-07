/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:52:23 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/07 18:52:28 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	size2;
	int	app;

	size2 = 0;
	while (size2 < (size / 2))
	{
		app = tab[size2];
		tab[size2] = tab[size - 1 - size2];
		tab[size -1 - size2] = app;
		size2++;
	}
}
