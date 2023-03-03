/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:13:12 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/23 13:35:26 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	length(long n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		count ++;
		n /= 10;
	}
	return (count);
}

static void	ft_setvalues(char *t, int i, long n)
{
	int	k;

	if (i == 0)
		k = length(n) - 1;
	else
		k = length(n);
	while (k >= i)
	{
		t[k] = n % 10 + '0';
		n = n / 10;
		k --;
	}
}

char	*ft_itoa(int n)
{
	char	*t;
	int		i;
	long	j;

	j = (long)n;
	i = 0;
	t = (char *)malloc(sizeof (char) *(length(j) +1));
	if (!t)
		return (NULL);
	t[length(j)] = '\0';
	if (j < 0)
	{
		t[i] = '-';
		i ++;
		j *= -1;
	}
	ft_setvalues(t, i, j);
	return (t);
}
