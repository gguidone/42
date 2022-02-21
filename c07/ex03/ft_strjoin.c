/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:41:58 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/17 14:35:49 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int ft_tot_len(int size, char **strs, char *sep)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (i < size)
	{
		res = res + ft_strlen(strs[i]);
		i++;
	}
	res = res + (ft_strlen(sep) * (size - 1)) + 1;
	return (res);
}

char *ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *str;
	int i;

	i = 0;
	if (size == 0)
	{
		str = malloc(0);
		return (str);
	}
	if (!(str = malloc(ft_tot_len(size, strs, sep))))
		return (0);
	str = malloc(ft_tot_len(size, strs, sep));
	while (i < size - 1)
	{
		str = ft_strcat(str, strs[i]);
		str = ft_strcat(str, sep);
		i++;
	}
	str = ft_strcat(str, strs[size - 1]);
	return (str);
}
