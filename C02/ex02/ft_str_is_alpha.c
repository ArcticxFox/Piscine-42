/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:18:37 by ejones            #+#    #+#             */
/*   Updated: 2025/09/09 14:46:28 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'z' || (*str < 'a' && *str > 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main()
{
	char str[] = "HelloWorld";
	char str1[] = "Hello-- World 1";
	char str2[] = "";
	printf("%d", ft_str_is_alpha(str));
	printf("\n");
	printf("%d", ft_str_is_alpha(str1));
	printf("\n");
	printf("%d", ft_str_is_alpha(str2));
}*/
