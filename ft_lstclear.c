/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:28:16 by mmoufid           #+#    #+#             */
/*   Updated: 2022/10/24 15:01:13 by mmoufid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*helper;

	helper = NULL;
	if (!lst || !del)
		return ;
	helper = *lst;
	while (helper != NULL)
	{
		*lst = helper->next;
		del(helper->content);
		free(helper);
		helper = *lst;
	}
	lst = NULL;
}
