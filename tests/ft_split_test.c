/* /////////////////////////////////////////////////////////////
#include "ft_calloc.c"
#include "ft_strlen.c"
//void			*ft_calloc(size_t nitems, size_t size);
//size_t			ft_strlen(const char *str);
char			**ft_split(char const *s, char c);
int	main(void)
{
	char 	string[30] = "  ol ol";
	char	ch = ' ';
    char	**result;
	int		i = 0;
 	
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
		free (result);
	}
	else
		printf("Failed to split the string.\n");
	printf("---------------------------\n\n");
	return (0);
} 

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = malloc(nitems * size);
	if (ptr == NULL)
		return (NULL);
	while (i < (nitems * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
} /////////////////////////////////////////////////////	 */	