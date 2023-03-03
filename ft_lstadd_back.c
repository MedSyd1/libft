/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:21:19 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/23 12:02:13 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*helper;

	helper = NULL;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	helper = *lst;
	while (helper->next != NULL)
		helper = helper->next;
	helper->next = new;
}
