/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <gguidone@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:06:59 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/03 10:07:03 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_print_alphabet(void)
{
	char c = 'a';

	while(c<='z')
	{
		write(1,&c,1);
		c++;
	}
	return;
}

int main (void)
{
	ft_print_alphabet();
	return 0;
}


