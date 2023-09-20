/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:57:59 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/08/31 12:04:07 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (b != 0)
	{
		div = *a;
		mod = *b;
		*a = div / mod;
		*b = div % mod;
	}
}
/*
#include <stdio.h>
int main()
{
    int x;
    int y;

    x = 0;
    y = 2;
    ft_ultimate_div_mod(&x, &y);
    printf("valor da divisao: %d valor do resto %d", x, y);
}*/
