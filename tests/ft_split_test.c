#include "../include/libft.h"

char			**ft_split_test()
{
	char 	string[30] = " --this-is a-string";
	char	ch = ' ';
    char	**result;
	int		i = 0;
 	
	printf("\n/===================================\\");
	printf("\n|        Running ft_split           |");
	printf("\n|             Tests                 |");
	printf("\n\\===================================/\n");

	printf("---------------------------\n");
	printf("\tCREATED FUNCTION:\n");
	result = ft_split(string, ch);
	if (result)
	{
		while (result[i] != NULL)
		{
			printf(" %s\n", result[i]);
			free (result[i]);
			i++;
		}
		printf("\n[🟢] Success!\n");
		free (result);
	}
	else
		printf("[🔴] Failed to split the string.\n");
	printf("---------------------------\n\n");
	return (0);
} 