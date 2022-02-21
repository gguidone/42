#include <stdlib.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int length;
	t_stock_str *node;
	t_stock_str *arr = malloc(sizeof(t_stock_str) * (ac + 1));
	int i;

	i = 0;
	while (i < ac)
	{
		length = ft_strlen(av[i]);
		node = malloc(sizeof(t_stock_str));
		node->size = length;
		node->str = malloc(length + 1);
		node->copy = malloc(length + 1);
		ft_strcpy(node->str, av[i]);
		ft_strcpy(node->copy, av[i]);
		arr[i] = *node;
		i++;
	}
	node = malloc(sizeof(t_stock_str));
	node->size = 1;
	node->str = malloc(1);
	node->copy = malloc(1);
	node->str[0] = '\0';
	node->copy[0] = '\0';
	arr[i] = *node;
	return arr;
}