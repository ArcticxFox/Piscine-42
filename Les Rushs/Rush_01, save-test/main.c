/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 07:51:55 by bjacquet          #+#    #+#             */
/*   Updated: 2025/09/13 15:11:30 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**malloc_grid(void);
void	free_grid(int **g);
int		parse_vals(char *s, int out[16]);
void	ft_putchar(char c);
void	error_msg(char *msg);
int resolve_row(int **g);

void	print_grid(int **g)
{
	int	i;
	int	j;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			ft_putchar((g[i][j++] + '0'));
			ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}

void	print_gridone(int **g)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 5)
	{
		j = 0;
		while (j <= 5)
		{
			ft_putchar((g[i][j++] + '0'));
			ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}

void	int_grid(int **g, int v[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		g[0][i + 1] = v[i];
		g[5][i + 1] = v[4 + i];
		g[i + 1][0] = v[8 + i];
		g[i + 1][5] = v[12 + i];
		i++;
	}
}

int	int_tab(char *arg)
{
	int	v[16];
	int	**g;

	if (parse_vals(arg, v) != 0)
	{
		error_msg("Arguments Invalides!");
		return (0);
	}
	g = malloc_grid();
	if (!g)
	{
		error_msg("Erreur creation tableau");
		return (0);
	}
	int_grid(g, v);
	//mettre la function test
 	resolve_row(g);
	print_gridone(g);
	free_grid(g);
	return (1);
}

int	main(int argc, char **argv)
{
	int	nb_arg;

	nb_arg = 0;
	if (argc == 2)
	{
		if (!int_tab(argv[1]))
			error_msg("Arguments Invalides!");
	}
	else
		error_msg("Arguments Invalides!");
	return (0);
}
