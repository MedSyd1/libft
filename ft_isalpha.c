/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:29:19 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/22 23:45:21 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	return ((arg >= 97 && arg <= 122) || (arg >= 65 && arg <= 90));
}
