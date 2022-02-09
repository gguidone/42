/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:37:06 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/09 15:32:49 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*temp;

	temp = dest;
	while (n)
	{
		if (*src != 0)
		{
			*temp = *src;
			src ++;
		}
		else
			*temp = '\0';
		temp++;
		n--;
	}
	
	return (dest);
}
