/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 09:56:30 by bjacquet          #+#    #+#             */
/*   Updated: 2025/09/13 09:56:33 by bjacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	**malloc_grid(void)
{
	int	**g;
	int	r;
	int	c;

	g = (int **)malloc(6 * sizeof(int *));
	if (!g)
		return (NULL);
	r = 0;
	while (r < 6)
	{
		g[r] = (int *)malloc(6 * sizeof(int));
		if (!g[r])
			return (NULL);
		c = 0;
		while (c < 6)
		{
			g[r][c] = 0;
			c++;
		}
		r++;
	}
	return (g);
}

void	free_grid(int **g)
{
	int	r;

	r = 0;
	while (r < 6)
	{
		free(g[r]);
		r++;
	}
	free(g);
}
