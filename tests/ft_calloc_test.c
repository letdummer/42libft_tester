/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:24:57 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/11 16:43:13 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

#define SIZE_MAX 100

int	*ft_calloc_test()
{
	int		n;
	int		i;
	int		*array;
	size_t	large_n;

	n = 5;
	i = 0;
	large_n = SIZE_MAX;
	array = (int *) ft_calloc(n, sizeof(int));

	printf("\n/===================================\\");
	printf("\n|        Running ft_calloc          |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");
	if (array == NULL)
	{
		printf("Memory allocation failed!\n");
		return (NULL);
	}

	printf("Array elements after calloc: ");
	while (i < n)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	free(array);

	printf("\nAttempting to allocate a large block of memory with |%zu| elements ...\n", large_n);

	array = (int *) ft_calloc(large_n, sizeof(int));
	if (array == NULL)
	{
		printf("[🔴] Failure: Memory allocation failed as expected due to the large size.\n");
	}
	else
	{
		printf("[🟢] Success: Memory was allocated despite the large request.\n");
		free(array);
	}

	return (NULL);
}