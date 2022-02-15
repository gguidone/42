/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:35:16 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/14 22:13:02 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	search_num(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	lastnum_pos(char *str, int *sign, char *base)
{
	int	cont;

	cont = 0;
	while (str[cont] == ' ')
		cont++;
	while (str[cont] == '+' || str[cont] == '-')
	{
		if (str[cont] == '-')
			*sign = -*sign;
		cont++;
	}
	while (search_num(str[cont], base) != 0)
		cont++;
	if (cont != 0)
		cont--;
	return (cont);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) < 2)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+' || str[i] < 32 || str[i] > 126)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	cont;
	int	mult;
	int	*p;

	if (!check_base(base))
		return (0);
	p = &sign;
	mult = 1;
	sign = 1;
	cont = lastnum_pos(str, p, base);
	result = 0;
	while (str[cont] != '-' && str[cont] != '+' && str[cont] != ' ' && cont != 0)
	{
		result = result + ((search_num(str[cont], base)) * mult);
		mult = mult * ft_strlen(base);
		cont--;
	}
	result = sign * result;
	return (result);
}
