//#include <libft.h>
//#include "ft_printf.h"
#include <unistd.h>

void		ft_putnstr(char *str, size_t len)
{
	int i;

	i = 0;
	while (str[i] != '\0' && len > 0)
	{
		write(1, &str[i], 1);
		i++;
		len--;
	}
}

int			main(void)
{
	char *str = "hello world";
	char *test = &str[1];

	ft_putnstr(str, test - str);
	return (0);
}
