/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:27:52 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/23 21:39:01 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
