/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:07:13 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/09/04 19:50:04 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_str_is_alpha("ads\nfdasHJJKHJHKsafda"));
	printf("%d\n", ft_str_is_alpha("dafasdJKJLfdsfA"));
	printf("%d\n", ft_str_is_alpha(""));
}*/
