/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:45:21 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/23 18:48:48 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t;

	if (!s1 || !s2)
		return (NULL);
	if (!*s1 && !*s2)
	{
		t = malloc(1);
		*t = '\0';
		return (t);
	}
	t = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!t)
		return (NULL);
	ft_memcpy(t, s1, ft_strlen(s1));
	ft_memcpy(t + ft_strlen(s1), s2, ft_strlen(s2));
	t[ft_strlen(s2) + ft_strlen(s1)] = '\0';
	return (t);
}
