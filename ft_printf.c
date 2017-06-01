#include <libft.h>
#include "ft_printf.h"

static ssize_t 		handle_arg(char **str, va_list *args, t_arg *sarg)
{
	ssize_t		ret;
	t_handler	handler;
}

static int			ft_in_printf(const char *str, va_list *args size_t chars)
{
	char		*next_arg;
	t_arg		*sarg;
	ssize_t		handler_len;

	next_arg = ft_strchr(str, '%');
	if (*str == '\0')
		return (chars);
	if (next_arg = NULL)
	{
		ft_putstr(str);
		return (chars + ft_strlen(str));
	}
	else if (next_arg > str)
	{
		ft_putnstr(str, next_arg - str);
		return (ft_in_printf(next_arg, args, chars + next_arg - str));
	}
	else
	{
		ft_bzero(&sarg, sizeof(sarg));
		if ((handler_len = handle_arg((char**)&str, args, &sarg)) == -1)
			return (-1);
		else return (ft_in_printf(str, args, chars + handler_len));
	}
}

int					ft_printf_(const char *str, ...)
{
	va_list 	args;
	int			ret;

	va_start(cargs, str);
	ret = ft_in_printf(str, &args);
	va_end(args);
	return (ret);
}
