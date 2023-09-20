/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:37:57 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/09/03 17:19:49 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
    printf("%d\n", ft_str_is_uppercase("Banana"));
    printf("%d\n", ft_str_is_uppercase("banana\n"));
    printf("%d\n", ft_str_is_uppercase("BANANA"));
    printf("%d\n", ft_str_is_uppercase(""));
}*/
