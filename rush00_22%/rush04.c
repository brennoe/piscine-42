/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:21:04 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/08/26 11:30:30 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char i);

void    ft_matriz(int col, char ini, char med, char end)

    {
        int contador;
        
        contador = 1;
        while (contador <= col)
        {
            if (contador == 1)
                    ft_putchar(ini);
            else if(contador == col)
                    ft_putchar(end);
            else
                    ft_putchar(med);
            contador++;
        }
        ft_putchar('\n');
    }

void rush(int x, int y)
{
    int     cont;

    cont = 1;
    if (x >= 1 && y >= 1)
    {
        while(cont <= y)
        {
            if (cont == 1)
                ft_matriz (x, '/', '*', 92);
            else if (cont == y)
                ft_matriz (x, 92, '*', '/');
            else
                ft_matriz(x, '*', ' ', '*');
                cont++;
        }
    }
}