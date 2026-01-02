/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:40:51 by ejones            #+#    #+#             */
/*   Updated: 2025/09/17 19:38:10 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_recursive_factorial(atoi(av[1])));
}
