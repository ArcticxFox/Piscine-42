/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:55:26 by ejones            #+#    #+#             */
/*   Updated: 2025/09/18 18:58:11 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
	}
}
