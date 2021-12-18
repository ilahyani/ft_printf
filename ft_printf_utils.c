#include "ft_printf.h"

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
        if (nb == -2147483648)
                write(1, "-2147483648", 11);
        else if (nb < 0)
        {
                ft_putchar('-');
                ft_putnbr(nb * -1);
        }
        else if (nb >= 0 && nb <= 9)
                ft_putchar(nb + 48);
        else
        {
                ft_putnbr(nb / 10);
                ft_putchar(nb % 10 + 48);
        }
}

void    ft_putstr(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                write(1, &str[i], 1);
                i++;
        }
}
