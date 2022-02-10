/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:54:13 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/10 13:12:28 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lastnum_pos(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] == ' ')
		cont++;
	while (str[cont] == '+' || str[cont] == '-')
		cont++;
	while (str[cont] >= '0' && str[cont] <= '9')
		cont++;
	cont--;
	return (cont);
}

int	det_sign(char *str)
{
	int	sign;

	sign = 1;
	while (*str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	cont;
	int	mult;

	mult = 1;
	cont = lastnum_pos(str);
	result = 0;
	sign = det_sign(str);
	while (str[cont] != '-' && str[cont] != '+')
	{
		result = result + ((str[cont] - 48) * mult);
		mult = mult * 10;
		cont--;
	}
	result = sign * result;
	return (result);
}
