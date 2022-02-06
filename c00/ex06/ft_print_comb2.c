/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <gguidone@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:12:54 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/03 10:12:57 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void ft_print_comb2(void){
    char stringa1 [2] = "00";
    char stringa2 [2] = "00";
    char separatore1 = ' ';
    char separatore2[2] = ", ";
    while(stringa1[0]<='9'){
        stringa1[1]='0';
        while(stringa1[1]<='9'){
            stringa2[0] = '0';
            while(stringa2[0]<='9'){
                stringa2[1]='0';
                while(stringa2[1]<='9'){
                    if(stringa1[0]!=stringa2[0] || stringa1[1]!=stringa2[1]){
                        write(1,&stringa1,2);
                        write(1,&separatore1,1);
                        write(1,&stringa2,2);
                        write(1,&separatore2,2);
                    }
                stringa2[1] = stringa2[1] + 1;
                }
            stringa2[0] = stringa2[0] + 1;
            }
        stringa1[1] = stringa1[1] + 1;    
        }
    stringa1[0] = stringa1[0] + 1;
    }
}

int main(){
    ft_print_comb2();
    return 0;
}
