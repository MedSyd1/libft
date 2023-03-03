/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:06:06 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/24 11:40:25 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	firstindex(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	lastindex(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;
	int		new_size;

	if (!s1 || !set)
		return (NULL);
	start = firstindex(s1, set);
	end = lastindex(s1, set);
	new_size = end - start;
	if (start >= end)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (new_size + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1 + start, new_size + 1);
	return (str);
}
