/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuisais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 11:20:41 by spuisais          #+#    #+#             */
/*   Updated: 2018/09/12 18:57:01 by spuisais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *table;
	int size;

	if (min >= max)
	{
		table = NULL;
		return (table);
	}
	size = max - min;
	table = (int*)malloc(sizeof(table) * (size));
	i = 0;
	while (min < max)
	{
		table[i] = min;
		min++;
		i++;
	}
	return (table);
}
