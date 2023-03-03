/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:33:45 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/23 12:59:22 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*ft_dst;
	unsigned char	*ft_src;

	ft_dst = (unsigned char *)dst;
	ft_src = (unsigned char *)src;
	if (src < dst)
	{
		while (n--)
			ft_dst[n] = ft_src[n];
		return (dst);
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
