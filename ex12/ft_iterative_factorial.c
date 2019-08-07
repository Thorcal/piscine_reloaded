/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spuisais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 09:18:46 by spuisais          #+#    #+#             */
/*   Updated: 2018/09/19 12:55:33 by spuisais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int resultat;

	i = 1;
	resultat = 1;
	while (i <= nb)
	{
		resultat *= i;
		i++;
	}
	if (nb < 0 || nb > 12)
		resultat = 0;
	return (resultat);
}
