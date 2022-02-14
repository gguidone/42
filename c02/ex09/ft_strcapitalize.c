/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:10:02 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/09 18:18:11 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*temp;
	int		cont;

	temp = str;
	cont = 0;
	while (*str != '\0')
	{
		if (cont == 0 && *str >= 'a' && *str <= 'z')
			*str = *str - 32;
		else if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		cont++;
		if ((*str > 31 && *str < 48) || (*str > 57 && *str < 65))
			cont = 0;
		if ((*str > 90 && *str < 97) || *str > 122)
			cont = 0;
		str++;
	}
	return (temp);
}
