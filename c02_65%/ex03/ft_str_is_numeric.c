/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:20:00 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/09/03 17:12:55 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
    printf("%d\n", ft_str_is_numeric("ierhgdinsdo42"));
    printf("%d\n", ft_str_is_numeric("3672432635698"));
    printf("%d\n", ft_str_is_numeric("BSVBJnkfnsvsl"));
    printf("%d\n", ft_str_is_numeric(""));

}*/
