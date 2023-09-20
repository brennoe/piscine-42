/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 09:47:46 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/09/09 12:47:07 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] && s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int main()
{
	char s1[] = "maca";
	char s2[] = "mac";
	printf("%d", ft_strcmp(s1, s2));
}*/
