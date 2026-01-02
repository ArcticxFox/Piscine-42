/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 18:32:14 by ejones            #+#    #+#             */
/*   Updated: 2025/09/24 18:48:52 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_allocat_str_to_malloc(char **strs, char *strn, int size)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = 0;
	while (n < size - 1)
	{
		if (strs[i][j] != '\0')
			strn[n] = strs[i][j++];
		else
		{
			j = 0;
			i++;
		}
		n++;
	}
	strn[n] = '\0';
}
#include <stdio.h>
int	main(int ac, char **av)
{
	char *arr;
	int size;
	(void)ac;
	size = (sizeof(av[ac - 1][0]) / sizeof(av[1][0]));
	printf("%d\n", size);
	ft_allocat_str_to_malloc(&av[0], arr, size);
	printf("size : %d | %s\n", size, arr);

	return (0);
}
