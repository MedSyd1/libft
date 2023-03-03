/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:58:13 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/23 12:28:51 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*helper;

	count = 0;
	helper = NULL;
	if (!lst)
		return (0);
	helper = lst;
	while (helper != NULL)
	{
		count++;
		helper = helper->next;
	}
	return (count);
}
