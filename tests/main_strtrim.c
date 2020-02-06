//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_starttrim(char const *s1, char const *set)
{
	int start;
	int i;
	int j;

	i = 0;
	start = 0;
	while (*(s1 + i) && start == i)
	{
		j = 0;
		while (*(set + j) && start == i)
		{
			if (*(s1 + i) == *(set + j))
				start = i + 1;
			j++;
		}
		i++;
	}
	return (start);
}

int	ft_endtrim(char const *s1, char const *set, int start)
{
	int end;
	int i;
	int j;

	end = strlen(s1) - 1;
	i = end;
	//printf("[start=%d]", start);
	while (i > start && end == i)
	{
		j = 0;
		//printf("[i=%d][j=%d][end=%d]", i, j, end);
		while(*(set + j) && end == i)
		{
			if (*(s1 + i) == *(set + j))
				end = i - 1;
			j++;
		}
		i--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	start;
	int	end;
	int	i;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	start = ft_starttrim(s1, set);
	end = ft_endtrim(s1, set, start);
	if (NULL != (str = (char *)malloc((end - start + 2) * sizeof (char))))
	{
		i = 0;
		while (start <= end)
		{
			*(str + i) = s1[start];
			start++;
			i++;
		}
		*(str + i) = '\0';
		return (str);
	}
	return (NULL);
}

int	main(void)
{
	printf("%s\n", ft_strtrim("1232.3abcdef321", "231"));
	printf("%s\n", ft_strtrim("a123abcdef321a", "231"));
	printf("%s\n", ft_strtrim("123abcdef321", ""));
	printf("%s\n", ft_strtrim("", "231"));
	printf("%s\n", ft_strtrim("", ""));
	printf("%s\n", ft_strtrim("123af321", "231"));
	printf("%s\n", ft_strtrim("123321", "231"));
	return(0);
}
