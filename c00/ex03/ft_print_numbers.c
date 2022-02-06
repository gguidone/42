/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <gguidone@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:08:06 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/03 10:08:10 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_print_numbers(void)
{
	char c = '0';

	while(c<='9')
	{
		write(1,&c,1);
		c++;
	}
	return;
}

int main (void)
{
	ft_print_numbers();
	return 0;
}
