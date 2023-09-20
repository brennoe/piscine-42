/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:01:37 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/09/12 22:50:43 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main()
{
	printf("%i", ft_iterative_factorial(0));
}*/
