#include <stdio.h>
#include <inttypes.h>
#include <libft.h>
#include <locale.h>
#include <wchar.h>
#include "ft_printf.h"

int			main(void)
{
	char	*test;
	char	c;

	test = "{%c}";
	c = '\0';
	printf("PRINTF :\n");
	printf("%d\n", printf(test, c));
	printf("FT_PRINTF\n");
	printf("%d\n", ft_printf(test, c));
	return (0);
}
