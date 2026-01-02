/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:37:40 by ejones            #+#    #+#             */
/*   Updated: 2025/09/16 12:01:45 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	//printf("%c ", str[i]);
	i++;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9')
				&& (str[i+1] >= 'a' && str[i+1] <= 'z'))
		{
			str[i+1] -= 32;
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("\n%s", str);
	ft_strcapitalize(str);
	printf("\n%s", str);
}
