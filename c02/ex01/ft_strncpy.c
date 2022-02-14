/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:37:06 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/09 18:17:54 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*temp;
	int		flag;

	flag = 0;
	temp = dest;
	while (n)
	{
		if (*src != 0 && !flag)
		{
			*temp = *src;
			src ++;
		}
		else
			flag = 1;
		if (flag)
			*temp = '\0';
		temp++;
		n--;
	}
	return (dest);
}
