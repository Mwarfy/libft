/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matranch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 15:55:20 by matranch          #+#    #+#             */
/*   Updated: 2017/12/07 16:45:26 by matranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	char *str1 = (char*)s1;
	char *str2 = (char*)s2;

	i = 0;
	if (!(*s2))
		return ((char*)s1);
	while(*str1 && n)
	{
		s1 = str1;
		s2 = str2;
		i = n;
		while (*s1 && i && !(*s1-*s2))
		{
			i--;
		   	s1++;
		   	s2++;
		}
		if(!*s2)
			return(str1);
		str1++;
		n--;
	}
	return (NULL);
}
