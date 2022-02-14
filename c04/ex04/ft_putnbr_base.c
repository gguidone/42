/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:54:13 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/14 19:00:04 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	solve(long nbr, char *base, int divisore)
{
	char	nb[32];
	int		i;

	i = 0;
	while (nbr > 0)
	{
		nb[i] = base[nbr % divisore];
		nbr = nbr / divisore;
		i++;
	}
	while (--i >= 0)
	{
		ft_putchar(nb[i]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr_l;
	int		divisore;

	if (!check_base(base))
		return ;
	divisore = ft_strlen(base);
	if (nbr < 0)
	{
		nbr_l = nbr;
		nbr_l = -nbr_l;
		ft_putchar('-');
	}
	else
		nbr_l = nbr;
	solve(nbr_l, base, divisore);
}
