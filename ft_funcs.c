/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funcs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:12:30 by ghsaad            #+#    #+#             */
/*   Updated: 2025/01/20 19:21:14 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	ft_putstr(char *string)
{
	int	len;

	if (!string)
	{
		string = "(null)";
	}
	len = ft_strlen(string);
	if (write(1, string, len) == -1)
	{
		return (-1);
	}
	return (len);
}

int	ft_putnum(long number)
{
	int	len;
	int	temp_len;

	len = 0;
	if (number < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		len++;
		number = -number;
	}
	if (number > 9)
	{
		temp_len = ft_putnum(number / 10);
		if (temp_len == -1)
			return (-1);
		len += temp_len;
	}
	if (ft_putchar((number % 10) + '0') == -1)
		return (-1);
	len++;
	return (len);
}

int	ft_putnum_unsigned(unsigned int number)
{
	int	len;
	int	temp_len;

	len = 0;
	if (number > 9)
	{
		temp_len = ft_putnum_unsigned(number / 10);
		if (temp_len == -1)
			return (-1);
		len += temp_len;
	}
	if (ft_putchar((number % 10) + '0') == -1)
		return (-1);
	len++;
	return (len);
}
