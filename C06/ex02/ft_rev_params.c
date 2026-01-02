/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:59:37 by ejones            #+#    #+#             */
/*   Updated: 2025/09/18 19:03:37 by ejones           ###   ########.fr       */
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

	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(argv[i--]);
	}
}
