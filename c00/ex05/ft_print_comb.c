/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <gguidone@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:12:08 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/03 10:12:12 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void ft_print_comb(void){
    char stringa [3] = "000";
    char separatore [2] = ", ";
    while(stringa[0] < '8'){
        stringa[1] = '0';
        while(stringa[1] < '9'){
            stringa[2] = '0';
            while(stringa[2] <= '9'){
            if(stringa[0]!=stringa[1] && stringa[1]!=stringa[2] && stringa[0]!=stringa[2]){
                write(1,&stringa,3);
				if(stringa[0] != '7' || stringa[1] != '8' || stringa[2] != '9' )
               		 write(1,&separatore,2);
            }
            stringa[2]=stringa[2]+1;
            }
        stringa[1]=stringa[1]+1;    
        }
    stringa[0]=stringa[0]+1;
    }
}

int main(){
    ft_print_comb();
    return 0;
}
