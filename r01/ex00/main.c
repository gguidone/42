/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:13:59 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/12 17:15:18 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void stampa_stringa(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	 check_input(char *str, int lato) 
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (cont % 2 == 0 && (str[cont] < 49 || str[cont] > (lato + 48)))
		{
			stampa_stringa("Errore in input");
			ft_putchar('\n');
			return (0);
		}
		else if (cont % 2 == 1 && str[cont] != ' ')
		{
			stampa_stringa("Errore in input");
			ft_putchar('\n');
			return (0);
		}
		cont++;
	}
	if (cont != 31)
	{
		stampa_stringa("Stringa in input di dimensione sbagliata");
		ft_putchar('\n');
		return (0);
	}
	return (1);
}

char *get_string(char *str, char *str2)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (cont % 2 == 0)
		{
			str2[cont / 2] = str[cont];
		}
		cont++;
	}
	str2[(cont + 1) / 2] = '\0';
	return (str2);
}

char  **crea_matrice(char **mat, int lato)
{
	mat = (char **) malloc(lato * sizeof(char *));
	int	i;

	i = 0;
	while (i < lato)
	{
		mat[i] = (char *) malloc(lato);
		i++;
	}
	return (mat);
}

void riempi_matrice(char **mat, int lato)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (j < lato)
	{
		i = 0;
		while (i < lato)
		{
			mat[j][i] = 48;
			i++;
		}
		j++;
	}
}

void stampa_matrice(char **mat, int lato)
{
	int	i;
	int j;

	j = 0;
	while (j < lato)
	{
		i = 0;
		while ( i < lato)
		{
			ft_putchar(mat[j][i]);
			ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}		
}

void put_string(char **mat, char *str)
{
	int	conts;
	int contm;

	conts = 0;
	contm = 1;
	while (str[conts] != '\0')
	{
		if (contm == 5)
			contm = 1;
		if (conts < 4)
			mat [0][contm] = str[conts];
		else if (conts < 8)
			mat [5][contm] = str[conts];
		else if (conts < 12)
			mat [contm][0] = str[conts];
		else 
			mat [contm][5] = str[conts];
		conts++;
		contm++;
	}
}

int	main(int argc, char **argv)
{
	int	flag;
	if (argc != 2)
		stampa_stringa("Troppi argomenti in input");
	else 
	{
		flag = check_input(argv[1], 4);
		if (flag == 1)
		{
			char str[17]; 
			get_string(argv[1], str);
			char **mat = NULL;
		   	mat = crea_matrice(mat, 6);
			riempi_matrice(mat, 6);
			put_string(mat, str);
			stampa_matrice(mat, 6);
		}
	}	
	return (0);
}
