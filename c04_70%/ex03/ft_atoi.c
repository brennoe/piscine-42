/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:25:38 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/09/09 17:04:56 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	cont;
	int	sign;

	i = 0;
	cont = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		cont *= 10;
		cont += str[i] - '0';
		i++;
	}
	return (cont * sign);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "	 ------+-+-234ab567";
	printf("%d", ft_atoi(str));
}*/
