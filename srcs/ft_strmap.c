/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matranch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 13:33:53 by matranch          #+#    #+#             */
/*   Updated: 2017/12/07 18:20:39 by matranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	str = NULL;
	i = ft_strlen((char*)s);
	if (i > 0)
	{
		if (!(str = malloc(sizeof(char) * (i + 1))))
			return (NULL);
		i = 0;
		while ((char)s[i] != '\0')
		{
			str[i] = (*f)((char)s[i]);
			i++;
		}
		str[i] = 0;
	}
	return (str);
}
