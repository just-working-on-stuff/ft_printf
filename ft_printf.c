#include "printf.h"

int	formats(const char format, va_list ap)
{
	if (format == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (format == 'i' || format == 'd')
		return (ft_putnum(va_arg(ap, int)));
	else if (format == 'u')
		return (ft_putnum_unsigned(va_arg(ap, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_putnum_hexa(va_arg(ap, unsigned int), format));
	else if (format == 'p')
		return (ft_putptr(va_arg(ap, void *)));
	else if (format == %)
		return (ft_putchar('%'));
	return (-1);
}

int	ft_printf(const char *string, ...)
{
	va_list ap;
	int len;
	int temp_len;

	len = 0;
	va_start(ap, str);
     while(*string)
     {
          if (*str == '%')
          {
               temp_len = formats(*++str, ap);
               if (temp_len == -1)
                    return (-1);
               len += temp_len;
          }
          else
          {
               if (ft_putchar(*string) == -1)
                    return (-1);
               len++;
          }
          string++;
     }
     va_end(ap);
     return (len);
}