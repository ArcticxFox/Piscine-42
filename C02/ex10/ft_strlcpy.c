/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 15:48:08 by ejones            #+#    #+#             */
/*   Updated: 2025/09/14 15:59:23 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size);
}

int main (void)
{
	char src[] = "Hello World";
	char dest[100];
	int i;
	i = 0;
	ft_strlcpy(dest, src, sizeof(src));
//	printf("%d\n", ft_strlcpy(dest, src, sizeof(src)));
//	printf("%s", dest);

}
