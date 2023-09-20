/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:05:36 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/08/30 18:57:02 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	j;

	j = *a;
	*a = *b;
	*b = j;
}
/*#include <stdio.h>
int main()
{
	int x;
	int y;

	x = 4;
	y = 3;
	ft_swap(&x, &y);
	printf("valor de x/>y: %d \n", x);
	printf("valor de y/>x: %d \n", y);
}*/