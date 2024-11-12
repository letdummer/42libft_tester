/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:21:18 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/11 16:45:22 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

#include <stdio.h>

void	ft_bzero_test()
{
	int	size;
	int	str[50];
	int	i;

	i = 0;
	size = 9;
	ft_bzero(str, size * sizeof(int));
	
	printf("\n/===================================\\");
	printf("\n|        Running ft_bzero           |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");
	
	while (i < size)
	{
		printf("Test %d: %d\n", i, str[i]);
		i++;
	}
	printf("\n");
}