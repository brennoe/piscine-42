/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:44:16 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/09/12 23:14:22 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	r;

	r = 1;
	while (r * r <= nb && r <= 46340)
	{
		if (r * r == nb)
			return (r);
		else
			r++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_sqrt(0));
}*/
