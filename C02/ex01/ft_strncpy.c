/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 15:26:06 by ejones            #+#    #+#             */
/*   Updated: 2025/09/15 20:26:29 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int	j;

	i = 0;
	j = 0;
	
	while (i < n && src[i] != '\0')	
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}

int main (void)
{
	char src[15] = "Hello World";
	char dest[11];
	int i;
	i = 0;

	printf("%s", ft_strncpy(dest, src, 10));
}
