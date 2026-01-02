/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:16:13 by ejones            #+#    #+#             */
/*   Updated: 2025/09/10 15:31:01 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (&str[]);
}

int main(void)
{
	char str[] = "Hello WORLd";
	ft_strupcase(str);
	printf("%s", str);
}
