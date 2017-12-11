/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matranch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 17:47:55 by matranch          #+#    #+#             */
/*   Updated: 2017/12/11 16:45:00 by matranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str1 = (char*)src;
	char	*str2 = (char*)dest;
	if(str1 < str2)
	{
		while(n--)
			str2[n] = str1[n];
	}
	else
		ft_memcpy(str2, str1, n);
	return (str2);
}

/*int main()
{
	char str[20] = "test de merde";
	char str1[20] = "test de merde";
	char str2[30] = "chaine plus longue";
	char str3[30] = "chaine plus longue";
	printf("%s \n", (char*)&str);
	memmove(str2, str, 4);
	printf("%s \n", (char*)&str2);
	printf("%s \n", (char*)&str1);
	ft_memmove(str3, str1, 4);
	printf("%s \n", (char*)&str3);
	return (0);
}*/
