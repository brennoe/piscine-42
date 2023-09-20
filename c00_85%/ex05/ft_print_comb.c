/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <hfraga-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:40:49 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/08/28 18:44:54 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	v[3];

	v[0] = '0';
	while (v[0] <= '7')
	{
		v[1] = v[0] + 1;
		while (v[1] <= '8')
		{
			v[2] = v[1] + 1;
			while (v[2] <= '9')
			{
				write(1, &v, 3); 
				v[2]++;
				if (v[0] < '7')
					write (1, ", ", 2);
			}
			v[1]++;
		}
		v[0]++;
	}
}
/*
int main(void)
{
    ft_print_comb();
}
*/
