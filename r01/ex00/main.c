/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:13:59 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/12 13:24:11 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void get_strings(char *str)
{
	int	cont;
	int	cont2; 

	cont2 = 0;
	cont = 0;
	while (str[cont] != '\0')
	{
		if (cont % 2 == 0)
		{
			
		}
		cont++;
		cont2++;
	}
}
	
void stampa_matrice(int lato)
{
	int	riga;
	int	colonna;

	riga = 0;
	colonna = 0;
	while (riga < lato)
	{
		colonna = 0;
		while (colonna < lato)
		{
			ft_putchar('0');
			if (colonna != lato - 1)
				ft_putchar(' ');
			colonna++;
		}
		ft_putchar('\n');
		riga++;
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
			stampa_matrice(4);
	}	
	return (0);
}
