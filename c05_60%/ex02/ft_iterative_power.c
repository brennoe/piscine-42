/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:48:05 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/09/12 20:03:15 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nb2;

	nb2 = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		nb *= nb2;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_iterative_power(0, 0));
}*/
