/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:34:33 by ejones            #+#    #+#             */
/*   Updated: 2025/09/17 21:04:35 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power-- > 1)
		nb = a * nb;
	return (nb);
}
