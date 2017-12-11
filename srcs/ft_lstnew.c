/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matranch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 16:49:17 by matranch          #+#    #+#             */
/*   Updated: 2017/12/11 18:09:21 by matranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	 t_list *new;

	 if(!(new = ft_memalloc(sizeof(t_list))))
		 return (NULL);
	 new->content = (void*)content;
	 new->content_size = content_size;
	 new->next = NULL;
	 return (new);

}
