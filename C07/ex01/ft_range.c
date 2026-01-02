/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 18:54:16 by ejones            #+#    #+#             */
/*   Updated: 2025/09/23 17:54:21 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (max <= min)
		return (NULL);
	tab = malloc((max - min) * sizeof(int));
	while (min < max)
		tab[i++] = min++;
	return (tab);
}

/*#include <stdio.h>
int main(void)
{	
	int *arr = NULL;
	int i = 0;
	arr = ft_range(2, 5);
	printf("%c", *arr);
	while (i < 3)
	{
		printf("%d", arr[i]);
		i++;
	}
	return 0;
}*/
