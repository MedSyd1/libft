/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:36:43 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/23 19:07:27 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*p;

	len = ft_strlen(s);
	p = (char *)s;
	if (!p)
		return (NULL);
	while (len >= 0)
	{
		if (*(p + len) == (char)c)
			return (p + len);
		len--;
	}
	return (NULL);
}
