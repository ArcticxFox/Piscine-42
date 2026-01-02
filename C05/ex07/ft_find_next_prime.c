/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 15:04:59 by ejones            #+#    #+#             */
/*   Updated: 2025/09/22 15:35:11 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int 	n;

	n = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (n <= nb - 1)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	tmp;

	tmp = 0;
	while (tmp != 1)
	{
		tmp = ft_is_prime(nb);
		nb++;
	}
	return --nb;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int n = 0;
	(void)argc;
	n = ft_find_next_prime(atoi(argv[1]));
	printf("%d", n);
	return 0;
}
