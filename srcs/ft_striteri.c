/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matranch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 17:16:38 by matranch          #+#    #+#             */
/*   Updated: 2017/12/16 15:51:24 by matranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;

	i = 0;
	if (s != NULL && (f) != NULL)
	{
		while (s[i] != '\0' && s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}
