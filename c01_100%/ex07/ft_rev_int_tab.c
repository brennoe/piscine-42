/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:16:50 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/08/31 12:14:56 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)

{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
    int lista[] = {0,1,2,3,4};
    int size = 5;

    ft_rev_int_tab(lista, size);
    printf("%d,%d,%d,%d,%d", 
    lista[0], lista[1], lista[2], 
    lista[3],lista[4]);
}*/
