/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:35:21 by ejones            #+#    #+#             */
/*   Updated: 2025/09/10 15:10:57 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= ' ' && *str <= 127))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int main()
{
	char str[] = "\\dld'sd,";
	char str1[] = "scjlé€€L/--+5656";
	char str2[] = "";
	printf("%d", ft_str_is_printable(str));
	printf("\n");
	printf("%d", ft_str_is_printable(str1));
	printf("\n");
	printf("%d", ft_str_is_printable(str2));
}
