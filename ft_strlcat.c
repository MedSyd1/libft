/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:34:52 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/23 20:32:07 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		lend;
	size_t		lens;

	i = 0;
	lens = ft_strlen(src);
	if (!dstsize || (!dstsize && !dst))
		return (lens);
	lend = ft_strlen(dst);
	if (dstsize <= lend)
		return (lens + dstsize);
	while (src[i] && i + lend < dstsize - 1)
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}
