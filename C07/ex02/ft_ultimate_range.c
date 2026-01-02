/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 19:17:43 by ejones            #+#    #+#             */
/*   Updated: 2025/09/23 17:53:06 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(size * sizeof(int));
	if (range == NULL)
		return (-1);
	while (i < size)
		(*range)[i++] = min++;
	return (size);
}

/*#include <stdio.h>
int main(void)
{	
	int *arr = 0;
	int i = 0;
	int size;
	
	size = ft_ultimate_range(&arr, 5, 10);
		while
	while (i < size)
	{
		printf("%d", (arr)[i]);
		i++;
	}
	return 0;
}*/
