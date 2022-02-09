/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:31:49 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/09 14:59:14 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*src != '\0' )
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (temp);
}
int main()
{
	char c[5] = "ciao";
	char d[5];
	ft_strcpy(d,c);
	printf("%s",d);
	return 0;
}
