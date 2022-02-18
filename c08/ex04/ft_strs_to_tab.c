#include <stdlib.h>
#include "smystruct.h"
#include <stdio.h>

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
	t_stock_str *arr = malloc(sizeof(t_stock_str) * ac);
	int i = 0;
	while (i < ac)
	{
		int length = ft_strlen(av[i]);
		// t_stock_str node;
		// node.size = length;
		// node.str = malloc(length + 1);
		// node.copy = malloc(length + 1);
		t_stock_str *node = malloc(sizeof(t_stock_str));
		// (*node).size
		node->size = length;
		node->str = malloc(length + 1);
		node->copy = malloc(length + 1);
		ft_strcpy(node->str, av[i]);
		ft_strcpy(node->copy, av[i]);
		arr[i] = *node;
		i++;
	}
	return arr;
}

int main(int argc, char **argv)
{
	printf("%s\n", ft_strs_to_tab(argc, argv)[1].copy);
}
