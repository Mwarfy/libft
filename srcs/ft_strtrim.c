/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matranch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 14:15:58 by matranch          #+#    #+#             */
/*   Updated: 2017/12/10 15:30:50 by matranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int 	k;
	char	*str;

	str = NULL;
	k = 0;
	i = 0;
	j = 0;
	while(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = ft_strlen(s) - 1;
	while(s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if (i < j)
	{
		if(!(str = malloc(sizeof(char) * (j - i) + 2)))
			return (NULL);
		while(i <= j)
		{
			str[k] = s[i];
			k++;
			i++;
		}
		str[k] = 0;
		return (str);
	}
	return ("");
}
