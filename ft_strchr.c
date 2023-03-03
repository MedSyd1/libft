/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:34:36 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/24 00:14:21 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *hay, int c)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(hay))
	{
		if (hay[i] == (char)c)
			return ((char *)&hay[i]);
		i++;
	}
	return (0);
}
