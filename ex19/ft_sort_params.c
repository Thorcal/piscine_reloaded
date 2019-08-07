/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuisais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 13:51:59 by spuisais          #+#    #+#             */
/*   Updated: 2018/09/08 18:36:27 by spuisais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == '\0' || s2[i] == '\0')
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_print_params(char **params, int size)
{
	int i;

	i = 1;
	while (i < size)
	{
		ft_putstr(params[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;
	int j;
	char*str_swap;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[j], av[i]) < 0)
			{
				str_swap = av[i];
				av[i] = av[j];
				av[j] = str_swap;
			}
			j++;
		}
		i++;
	}
	ft_print_params(av, ac);
	return (0);
}
