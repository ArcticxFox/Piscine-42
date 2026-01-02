/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:55:15 by ejones            #+#    #+#             */
/*   Updated: 2025/09/13 17:26:01 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void resolve_row(int **g)
{
	int row = 1;
	int col = 1;

	while (row <= 4)
	{
		while(col <= 4)
		{
//----------------------- print 1 2 3 4 quand on peut --------------------//
			if(g[row][0] == 4)
				g[row][col] = col;				
			//top col
			if(g[0][col] == 4)
				g[row][col] = row;

			if(g[row][5] == 4)
				g[row][col] = 5 - col;				
			//top col
			if(g[5][col] == 4)
				g[row][col] = 5 - row;

//----------------------- print 4 quand il y a 1 -------------------------//

			if(g[row][0] == 1)
				g[row][1] = 4;				
			if(g[0][col] == 1)
				g[1][col] = 4;
			if(g[row][5] == 1)
				g[row][4] = 4;				
			if(g[5][col] == 1)
				g[4][col] = 4;				
			   
//----------------------- Print 4 si row left/right = 3/2 et inverse -----//

			if(g[row][0] == 3 && g[row][5] == 2)
				g[row][3] = 4;

			if(g[row][0] == 2 && g[row][5] == 3)
				g[row][2] = 4;

//----------------------- Print 4 si col top/bottom = 3/2 et inverse ----//

			if(g[0][col] == 3 && g[5][col] == 2)
				g[3][col] = 4;
			if(g[0][col] == 2 && g[5][col] == 3)
				g[2][col] = 4;
//---------------------- Increment column -------------------------------//
			col++;
		}
		col = 1;
		row++;
	}
	printf("%d\n", col);
	
}
