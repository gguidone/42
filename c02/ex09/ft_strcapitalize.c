/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:10:02 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/08 12:20:25 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	cont;

	cont = 0;
	while (*str != '\0')
	{
		if (cont = 0 && *str >= 'a' && *str <= 'z')
			*str = *str - 32;
		else if (*str >= 'A' && *str <= 'Z')
			*str = *str = 32;
		cont++;
		str++;
	}
	str = str - cont;
	return (str);
}
