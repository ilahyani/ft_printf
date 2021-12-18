#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	int	x = 420;
	int	y = 69;
	int	u = 44;
	char *s = 0;
	char *str = "ikhan";
	char	c = 'F';
	int i = ft_printf("%d,%i%% NICE %u %s %s %X %x %p %c\n", x, y, u, s, str, 17532, 17532, &y, c);
	int j = printf("%d,%i%% NICE %u %s %s %X %x %p %c\n", x, y, u, s, str, 17532, 17532, &y, c);
	printf("%d = %d hopefully", i, j);
	return (0);
}
