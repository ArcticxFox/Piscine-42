/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:24:23 by ejones            #+#    #+#             */
/*   Updated: 2025/09/08 16:07:50 by ejones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int var = 0;
	int *var0 = &var;
	int **var1 = &var0;
	int ***var2 = &var1;
	int ****var3 = &var2;
	int *****var4 = &var3;
	int ******var5 = &var4;
	int *******var6 = &var5;
	int ********var7 = &var6;
	
	ft_ultimate_ft(&var7);
	printf("%d", var);
}
