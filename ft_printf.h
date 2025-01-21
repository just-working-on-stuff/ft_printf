
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:12:37 by ghsaad            #+#    #+#             */
/*   Updated: 2025/01/20 19:13:21 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *string, ...);
int		formats(const char format, va_list ap);
int		ft_putptr(void *ptr);
ssize_t	ft_putnum_hexa(unsigned long long num, char alpha);
int		ft_putchar(char c);
size_t	ft_strlen(const char *str);
int		ft_putstr(char *string);
int	ft_putnum(long number);
int	ft_putnum_unsigned(unsigned int number);

#endif