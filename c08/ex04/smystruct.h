#ifndef SMYSTRUCT_H
#define SMYSTRUCT_H

typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;


		t_stock_str *node = malloc(sizeof(t_stock_str));
		// (*node).size
		node->size = length;
		node->str = malloc(length + 1);
		node->copy = malloc(length + 1);
		ft_strcpy(node->str, av[i]);
		ft_strcpy(node->copy, av[i]);
        

		// t_stock_str node;
		// node.size = length;
		// node.str = malloc(length + 1);
		// node.copy = malloc(length + 1);
		ft_strcpy(node.str, av[i]);
		ft_strcpy(node.copy, av[i]);

#endif