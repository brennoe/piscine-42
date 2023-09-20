/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:04:36 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/09/12 21:24:39 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
/*
#include <stdio.h>

int	main()
{
	printf("%i\n", ft_recursive_power(0, 0));
}*/
