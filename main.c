#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	int	x = 420;
	int	y = 69;
	int i = ft_printf("%d,%d NICE",x, y);
	printf("\n");
	int j = printf("%d,%d Nice",y, x);
	printf("\n");
	printf("hopefully %i = %i",i ,j);
	return (0);
}
