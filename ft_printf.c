#include "ft_printf.h"

void	dothething(int i, char *s, va_list list)
{
	if (s[i] == 'c')
		ft_putchar(va_arg(list, int));
	else if (s[i] == 's')
		ft_putstr(va_arg(list, char*));
	else if (s[i] == 'd')
		ft_putnbr(va_arg(list, int));
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int 	i;
	char	*tmp;

	tmp = (char *)s;
	va_start(list, s);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			dothething(i, tmp, list);
		}
		else
			ft_putchar(s[i]);
		i++;
	}
	va_end(list);
	return (i);
}
