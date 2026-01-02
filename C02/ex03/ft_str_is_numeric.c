/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:19:22 by ejones            #+#    #+#             */
/*   Updated: 2025/09/09 14:48:14 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main()
{
	char str[] = "0120345665889795";
	char str1[] = "542435HellW544orld 1";
	char str2[] = "";
	printf("%d", ft_str_is_numeric(str));
	printf("\n");
	printf("%d", ft_str_is_numeric(str1));
	printf("\n");
	printf("%d", ft_str_is_numeric(str2));
}*/
