/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Overflow.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 18:10:33 by ejones            #+#    #+#             */
/*   Updated: 2025/09/13 18:57:52 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
//decomente pour tester,

int duplicates_in_row(int g[6][6])
{
	int row = 1;
	int col = 1;
	int i = 1;

	while (row <= 4)
	{
		while(i <= 4)
		{
			while (col < 4)
			{
				if (g[row][i] == g[row][col + 1])
					return 1;
//				printf("| %d - %d | ", g[row][i], g[row][col + 1]);
				col++;
			}
			i++;
			col = i;
//			printf(":");
		}
		col = 1;
		i = 1;
//		printf("\n");
		row++;
	}
	return 0;
}

int main (void)
{
	int tmp[6][6] = {{0, 0, 0, 0},
		{0, 1, 2, 3, 4},
		{0, 5, 6, 7, 8},
		{0, 9, 10, 11, 12},
		{0, 12, 13, 14, 15},
		{0, 0, 0, 0, 0}};
	
	printf("%d", duplicates_in_row(tmp));
}
