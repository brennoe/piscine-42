/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:26:21 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/08/30 18:58:34 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>
int main()
{
    int x;
    int y;
    int div;
    int mod;

    x = 2;
    y = 0;
    ft_div_mod(x, y, &div, &mod);
    printf("valor de divisao: %d\n valor do resto: %d\n", div, mod);
}*/
