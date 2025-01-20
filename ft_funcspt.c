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


