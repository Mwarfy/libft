/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matranch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 17:05:25 by matranch          #+#    #+#             */
/*   Updated: 2017/12/07 18:08:15 by matranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	str = NULL;
	i = 0;
	if (size > 0)
	{
		str = malloc(sizeof(char) * size + 1);
		if(str != NULL)
			ft_memset(str, '\0', (size+1));
	}
	return (str);
}
