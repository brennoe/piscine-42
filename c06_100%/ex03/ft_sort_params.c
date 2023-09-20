/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfraga-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:46:58 by hfraga-e          #+#    #+#             */
/*   Updated: 2023/09/12 12:54:39 by hfraga-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *ptr1, char *ptr2)
{
	int	i;

	i = 0;
	while ((ptr1[i] == ptr2[i]) && (ptr1[i] && ptr2[i]))
	{
		i++;
	}
	return (ptr1[i] - ptr2[i]);
}

int	ft_size(char **tab, int size)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int ac, char *av[])
{
	int	i;

	ft_size(av, ac);
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
	}
	return (0);
}
