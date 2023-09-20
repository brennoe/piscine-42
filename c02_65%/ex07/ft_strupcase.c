/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:03:59 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/09/03 17:25:09 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main() 
{
	char str[] = "dasfdfaSFDFSJ";
	char *str2 = ft_strupcase(str);
	printf("%s\n",str2 );
	printf("%s\n",str );
}*/
