/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funcspt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghsaad <ghsaad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:20:39 by ghsaad            #+#    #+#             */
/*   Updated: 2025/01/20 19:21:50 by ghsaad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	len;
	int	temp_len;

	len = 0;
	if (ft_putstr("0x") == -1)
		return (-1);
	len += 2;
	temp_len = ft_putnum_hexa((unsigned long)ptr, 'x');
	if (temp_len == -1)
		return (-1);
	len += temp_len;
	return (len);
}

ssize_t	ft_putnum_hexa(unsigned long long num, char alpha)
{
	ssize_t	len;
	ssize_t	temp_len;
	char	*base;

	len = 0;
	if (alpha == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num > 15)
	{
		temp_len = ft_putnum_hexa((num / 16), alpha);
		if (temp_len == -1)
			return (-1);
		len += temp_len;
	}
	if (ft_putchar(base[num % 16]) == -1)
		return (-1);
	len++;
	return (len);
}
