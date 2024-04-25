/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:19:09 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/25 10:26:06 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst || !del)
		return ;
	while ((*lst) != NULL)
	{
		del((*lst)->content);
		aux = (*lst);
		(*lst) = (*lst)->next;
		free(aux);
	}
	lst = 0;
}
