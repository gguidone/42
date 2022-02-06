/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <gguidone@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:11:24 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/03 10:11:27 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void ft_is_negative(int n){
    char s = 'N';
    char p = 'P';
    if(n>=0)
        write(1,&p,1);
    else
        write(1,&s,1);
    return;
}

int main(){
    ft_is_negative(-3);
    return 0;

}
