/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:48:03 by ldummer-          #+#    #+#             */
/*   Updated: 2024/11/11 12:20:23 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "../include/libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "../include/libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	ft_strlcat_test(void)
{
    char    src[][50] = {"this is ", "Hello,"};
    char    dest[][50] = {"a string!", "world!"};
    size_t  nb[] = {10, 5};
    size_t  result;
    int     nb_tests;
    int     i;
    
    printf("\n/===================================\\");
    printf("\n|        Running ft_strlcat         |");
    printf("\n|             Tests                 |");
    printf("\n\\===================================/\n");

    nb_tests = sizeof(src) / sizeof(src[0]);

    i = 0;
    while (i < nb_tests)
    {
        char    temp_dest[50];
        strcpy(temp_dest, dest[i]);  // Make a copy of dest to prevent modifying the original in each test
        
        result = ft_strlcat(temp_dest, src[i], nb[i]); // Call your ft_strlcat

        // You can compare against the expected length based on the logic of your ft_strlcat
        size_t expected_result = ft_strlen(dest[i]) + ft_strlen(src[i]);

        if (result == expected_result && strcmp(temp_dest, dest[i]) == 0)
        {
            printf("[🟢] Test %d: Success! Length: %zu\t| ft_strlcat\n", i + 1, result);
        }
        else
        {
            printf("[🔴] Test %d: Failure.\n", i + 1);
            printf("Source: \"%s\", Dest Original: \"%s\"\n", src[i], dest[i]);
            printf("Expected length: %zu\t| ft_strlcat\n", expected_result);
            printf("Obtained length: %zu\t| ft_strlcat\n", result);
        }
        i++;
    }
    printf("\n");
} */

