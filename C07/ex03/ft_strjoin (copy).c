/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:13:02 by ejones            #+#    #+#             */
/*   Updated: 2025/09/24 18:04:54 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_size_of_seperator(char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_size_2d_array(char **str, int sep, int size)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = 0;
	while (i < size)
	{
		if (str[i][j] != '\0')
		{
			j++;
		}
		else
		{
			j = 0;
			i++;
			n = n + sep;
		}
		n++;
	}
	n -= sep;
	return (--n);
}

void	ft_allocat_str_to_malloc(char **strs, char *strn, char *sep, int size)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = 0;
	while (n < size - 1)
	{
		if (strs[i][j] != '\0')
			strn[n] = strs[i][j++];
		else
		{
			j = 0;
			while (sep[j] != '\0')
			{
				strn[n++] = sep[j++];
			}
			j = 0;
			i++;
			n--;
		}
		n++;
	}
	strn[n] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		comb_size;

	comb_size = ft_size_2d_array(&strs[0], ft_size_of_seperator(&sep[0]), size);
	printf("\n%d", comb_size);
	if (comb_size < 0)
		comb_size = 0;
	printf("\n%d", comb_size);
	new_str = malloc(comb_size * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	ft_allocat_str_to_malloc(&strs[0], &new_str[0], sep, comb_size);
	return (&new_str[0]);
}

int	main(int ac, char **av)
{
	char	*arr;

	arr = ft_strjoin((ac - 1), &av[1], "_-");
	printf("%s", arr);
	free(arr);
	return (0);
}
