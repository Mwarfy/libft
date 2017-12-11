/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matranch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 18:52:16 by matranch          #+#    #+#             */
/*   Updated: 2017/12/11 15:57:56 by matranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t 	k;

	i = 0;
	k = ft_strlen(src);
	if (size == 0)
		return (0);
	while (dest[i] != '\0' && i < size)
		i++;
	j = i;
	while(src[i - j] != '\0' && i < size - 1)
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < size)
		dest[i] = '\0';
	return (j + k);
}

/*int main()
{
	char str[20] = "salut \0";
	char *str1 = "unt chaine trop longue";
	size_t i = strlcat(str, str1, 10);
	printf("vrai : %zu %s\n",i, str);
	char str2[20] = "salut \0";
	size_t j = ft_strlcat(str2, str1, 10);
	printf("faux : %zu %s\n",i, str2);
	return(0);
}*/
