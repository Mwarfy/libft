/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nombre.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matranch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 18:17:40 by matranch          #+#    #+#             */
/*   Updated: 2017/12/10 19:34:47 by matranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_nombre(char *s, int test, char c, int nb)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while ((s[i] != c) && (s[i] != '\0'))
			{
				j++;
				i++;
			}
		}
		if ((k == nb) && (test == 2))
			return (j);
		k++;
		j = 0;
	}
	if (test == 1)
		return (k);
	return (0);
}
