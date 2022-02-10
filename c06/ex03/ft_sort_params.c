/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:09:44 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/10 19:51:53 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unisd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	stampa(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		stampa
