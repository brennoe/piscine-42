/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:19:00 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/09/04 19:32:32 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_up(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	m;

	i = 0;
	m = 1;
	ft_up(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (m == 1)
				str[i] -= 32;
			m = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			m = 0;
		else
			m = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "ola, tudo bem? 42palavras quar\nen6ta-e-duas; cinquenta+e+um";
	ft_strcapitalize(str);
	printf("%s", str);
}*/
