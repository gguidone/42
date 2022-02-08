/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:57:17 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/08 14:22:20 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;

	cont = 0;
	if (size == 0)
		*dest = '\0';
	else 
	{
		while (*src != '\0')
		{
			if (cont < size - 1)
				*dest = *src;
			else if(cont == size - 1)
				*dest = '\0';
			cont++;
			src++;
			dest++;
		}
	}
	return (cont);
}
