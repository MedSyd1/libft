/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:54:03 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/23 23:49:59 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	verifier(unsigned long nbr, int sign)
{
	if (sign < 0)
	{
		if (nbr == 2147483648)
			return (nbr * sign);
		return (0);
	}
	return (-1);
}

int	ft_atoi(const char *str)
{
	unsigned long	result;
	int				sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	if (result >= 2147483648)
		return (verifier(result, sign));
	return (result * sign);
}
