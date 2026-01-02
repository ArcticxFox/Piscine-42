/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 17:31:25 by ejones            #+#    #+#             */
/*   Updated: 2025/09/23 17:55:56 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(src);
	dup = malloc(size * sizeof(char));
	if (dup == NULL)
		return (0);
	while (i < size)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}

/*#include <stdio.h>
int main(void)
{
	char str[] = "Hello World";
	printf("%s", ft_strdup(str));
	return 0;
}*/
