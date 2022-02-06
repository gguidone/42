/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <gguidone@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:07:35 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/03 10:07:38 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char c = 'z';

	while(c>='a')
	{
		write(1,&c,1);
		c--;
	}
	return;
}

int main (void)
{
	ft_print_reverse_alphabet();
	return 0;
}
