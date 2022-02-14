/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:13:59 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/13 11:47:18 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "header.h"

void reset_four(char **mat, char **temp, int lato)
{
	int	i;
	int j;

	j = 0;
	while ( j < lato)
	{
		i = 0;
		while ( i < lato)
		{
			if (temp[j][i] == 52)
				mat[j + 1][i + 1] = 52;	
			else 
				mat[j + 1][i + 1] = 48;				
			i++;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		stampa_stringa("Troppi argomenti in input");
	else 
	{
		if (check_input(argv[1], 4) == 1)
		{
			char str[17]; 
			get_string(argv[1], str);
			char **mat = NULL;
			char **temp = NULL;
		 	mat = crea_matrice(mat, 6);
			temp = crea_matrice(temp, 4);
			riempi_matrice(mat, 6);
			put_string(mat, str);
			if (check_error(mat, 6) == 1 && check_error_2(mat, 6) == 1 && check_error_3(mat, 6) == 1)
			{	
				put_one_row(mat, 6);
				put_one_col(mat, 6);
				put_four_row(mat, 6);
				put_four_col(mat, 6);
				put_four_middle(mat, 6);
				put_tre(mat, 6);
				//stampa_matrice(mat, 6);
				transfer_mat(mat, temp, 6);
				reset_four(mat, temp, 4);
				stampa_matrice(mat, 6);
				ft_putchar('\n');
				stampa_matrice(temp, 4);				
				/*int	counter_comb_row = 1;
				int counter_comb_col = 1;
				int	counter_row = 0;
				int counter_col = 0;

				while (counter_row < 4 && counter_col < 4)
				{

					counter_comb_row = 1;
					while (counter_comb_row < 7)
					{
						rowcombn(mat, counter_comb_row, counter_row);
					}
					counter_row++;
				}
					counter_col = 1;
					counter_comb_col = 1;
					while (counter_col < 7)
					{
						while ()
					}
				}
				}		
			}*/
			}
			else
				stampa_stringa("Error!");
	}	
	return (0);
}
}
