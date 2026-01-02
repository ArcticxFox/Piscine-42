/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:42:53 by ejones            #+#    #+#             */
/*   Updated: 2025/09/09 15:00:44 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main()
{
	char str[] = "helloworld";
	char str1[] = "HellW544orld 1";
	char str2[] = "";
	printf("%d", ft_str_is_lowercase(str));
	printf("\n");
	printf("%d", ft_str_is_lowercase(str1));
	printf("\n");
	printf("%d", ft_str_is_lowercase(str2));
}*/
