/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:15:37 by ejones            #+#    #+#             */
/*   Updated: 2025/09/22 15:23:58 by ejones           ###   ########.fr       */
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
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_is_prime(atoi(argv[1])));
	return 0;
}
