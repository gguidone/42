/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:30:52 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/09 18:09:48 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	while (*dest)
		dest++;
	while (*src && nb--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (temp);
}
