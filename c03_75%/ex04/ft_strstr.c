/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:45:05 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/09/09 15:21:34 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	if (to_find[l] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + l] == to_find[l] && str[i + l])
		{
			l++;
		}
		if (to_find[l] == '\0')
			return (str + i);
		i++;
		l = 0;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "vasco da gama";
	char	to_find[] = "da";
	printf("FUNCAO ORI: %s\n", strstr(str, to_find));
	printf("FUNCAO CPY: %s\n", ft_strstr(str, to_find));
}*/
