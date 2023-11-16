/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoulal <tkoulal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:20:20 by tkoulal           #+#    #+#             */
/*   Updated: 2023/11/12 22:06:52 by tkoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*i;
	t_list	*tmp;

	if (*lst == NULL || del == NULL || lst == NULL)
		return ;
	i = *lst;
	while (i)
	{
		tmp = i;
		i = i->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
