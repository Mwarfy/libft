/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matranch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:25:56 by matranch          #+#    #+#             */
/*   Updated: 2017/12/07 18:05:34 by matranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *str;

	str = NULL;
	if (size > 0)
		str = malloc(sizeof(char) * size);
	if (str != NULL)
		ft_memset(str, 0, size);
	return (str);
}
