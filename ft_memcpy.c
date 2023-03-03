/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:33:17 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/23 22:58:36 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ft_dst;
	unsigned char	*ft_src;
	size_t			i;

	ft_dst = (unsigned char *)dst;
	ft_src = (unsigned char *)src;
	if (ft_dst == ft_src)
		return (dst);
	i = -1;
	while (++i < n)
		*(ft_dst++) = *(ft_src++);
	return (dst);
}
