/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:51:36 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/23 19:45:56 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		substring = malloc(sizeof(char ));
		if (!substring)
			return (NULL);
		*substring = '\0';
		return (substring);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substring = (char *)malloc(sizeof(char) * len + 1);
	if (!substring)
		return (NULL);
	while (i < len)
		substring[i++] = s[start++];
	substring[len] = '\0';
	return (substring);
}
