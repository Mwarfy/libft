/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matranch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 17:09:07 by matranch          #+#    #+#             */
/*   Updated: 2017/12/11 18:03:52 by matranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	
	while (lst->next != NULL)
	{
		(*f)(lst->content);
		new = new->next;
		lst = lst->next;
	}
	new->next = NULL;
	return (new);
}
