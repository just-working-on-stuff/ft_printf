#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		format(const char format, va_list args);
int		ft_putchar(char c);
size_t	ft_strlen(const char *str);
int		ft_putstr(char *string);
