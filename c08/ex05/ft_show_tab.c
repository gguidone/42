#include <unistd.h>
#include "ft_stock_str.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

void ft_print_int(int nb)
{
    int num[9];
    int i;

    i = 0;
    while (nb > 0)
    {
        num[i] = nb % 10;
        nb = nb / 10;        
        i++;
    }
    i--;
    while (i >= 0)
    {
        ft_putchar(num[i] + 48);
        i--;
    }
}

void ft_show_tab(struct s_stock_str *par)
{
    while (par->str[0] != '\0')
    {
        ft_putstr(par->str);
        ft_putchar('\n');
        ft_print_int(par->size);
        ft_putchar('\n');
        ft_putstr(par->copy);
        ft_putchar('\n');
        par++;
    }
}
