/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matranch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 18:55:33 by matranch          #+#    #+#             */
/*   Updated: 2017/12/07 14:38:05 by matranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char 	*str;

	str = (char*)s;
	i = ft_strlen(str);
	while(i > 0)
	{
		if (str[i] == (char)c)
			return ((char*)s + i);
		i--;
	}
	if ((char)c == '\0')
		return ((char *)s + ft_strlen(str));
	return (0);
}
