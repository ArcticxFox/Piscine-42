/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:22:02 by ejones            #+#    #+#             */
/*   Updated: 2025/09/10 14:31:18 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main()
{
	char str[] = "SALJFAloworld";
	char str1[] = "HELLOWORLD";
	char str2[] = "";
	printf("%d", ft_str_is_uppercase(str));
	printf("\n");
	printf("%d", ft_str_is_uppercase(str1));
	printf("\n");
	printf("%d", ft_str_is_uppercase(str2));
}*/
