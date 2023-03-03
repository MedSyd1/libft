/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:28:51 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/23 18:40:25 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*t;

	i = 0;
	t = (char *)malloc(sizeof(char ) * ft_strlen(s1) + 1);
	if (!t)
		return (NULL);
	while (*s1)
		t[i++] = *s1++;
	t[i] = '\0';
	return (t);
}
