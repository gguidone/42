/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:57:17 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/09 18:18:44 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;

	cont = 0;
	if (size > 0)
	{	
		while (src[cont] != '\0' && cont < size - 1)
		{
			dest[cont] = src[cont];
			cont++;
		}
		dest[cont] = '\0';
	}
	while (src[cont] != '\0')
		cont++;
	return (cont);
}
