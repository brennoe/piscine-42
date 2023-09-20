/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:40:13 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/09/03 17:16:01 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_str_is_lowercase("ADMKO98KMSO\nknod"));
	printf("%d\n", ft_str_is_lowercase("947326976-2376df4"));
	printf("%d\n", ft_str_is_lowercase("afdklblkdfjlkdfdd"));
	printf("%d\n", ft_str_is_lowercase("ADMKO98KMS"));
	printf("%d\n", ft_str_is_lowercase(""));
}*/
