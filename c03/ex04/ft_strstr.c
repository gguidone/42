/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:31:02 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/09 18:14:18 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	cont;

	cont = 0;
	while (*str)
		cont++;
	return (cont);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp;
	int		cont;
	int		target;

	temp = str;
	cont = 0;
	target = len(to_find);
	while (*str)
	{
		if (*str == *to_find)
		{
			to_find++;
			cont++;
		}
		else
		{
			to_find = to_find - cont;
			cont = 0;
		}
		if (cont == target)
			return (str - target);
		str++;
	}
	return (str);
}
