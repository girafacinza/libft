#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static int	ft_countstr(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			while (*(s + i) != c && *(s + i))
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

/*
static void	ft_allocatearray(char **array, char const *s, char c)
{
	int lastc_posit;
	int i;

	i = 0;
	lastc_posit = 0;
	while (*(s + i))
	{
		if (s[i] == c)
		{
			*array = (char *)malloc(sizeof(char) * (i - lastc_posit + 1));
			lastc_posit = i + 1;
			array++;
		}
		if (s[i + 1] == c)
		{
			*array = (char *)malloc(sizeof(char) * (i - lastc_posit + 1));
			lastc_posit = i + 1;
			array++;
		}

		i++;
	}
}
static void	ft_populatearray(char **array, const char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c)
		{
			array[i][j] = *s;
			j++;
		}
		if (*s == c || *(s + 1) == '\0')
		{
			array[i][j] = '\0';
			i++;
			j = 0;
		}
		s++;
	}
	array[i] = NULL;
}
*/

unsigned long	ft_strlen(char *string)
{
	unsigned long i;

	i = 0;
	while (string[i] != '\0')
		i++;
	return (i);
}

char		*ft_ctos(char c)
{
	char	*str;

	if (!(str = (char *)malloc(2 * sizeof(char))))
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}

static int	ft_starttrim(char const *s1, char const *set)
{
	int start;
	int i;
	int j;

	i = 0;
	start = 0;
	while (*(s1 + i) != '\0' && start == i)
	{
		j = 0;
		while (*(set + j) != '\0' && start == i)
		{
			if (*(s1 + i) == *(set + j))
				start = i + 1;
			j++;
		}
		i++;
	}
	return (start);
}

static int	ft_endtrim(char const *s1, char const *set, int start)
{
	int end;
	int i;
	int j;

	end = ft_strlen((char *)s1) - 1;
	i = end;
	while (i > start && end == i)
	{
		j = 0;
		while (*(set + j) && end == i)
		{
			if (*(s1 + i) == *(set + j))
				end = i - 1;
			j++;
		}
		i--;
	}
	return (end);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	//if (!s1)
	//	return (NULL);
	//if (!set)
	//	return ((char *)s1);
	start = ft_starttrim(s1, set);
	end = ft_endtrim(s1, set, start);
	if (NULL != (str = (char *)malloc((end - start + 2) * sizeof(char))))
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

char    **ft_split(char const *s, char c)
{
    char    **array;
    char    *buf;
    int        i;
    int        j;
    int        word_len;

    buf = ft_strtrim(s, ft_ctos(c));
    printf("%s\n", buf);
    if (!(array = (char **)malloc(ft_countstr(buf, c) * sizeof(char *))))
            return (NULL);
    i = 0;
    j = 0;
    while (*(buf + i) != '\0')
    {
        if (*(buf + i) == c)
        {
            word_len = i;
            array[j] = (char *)malloc((word_len + 1) * sizeof(char));
            array[j][word_len] = '\0';
            while (--word_len >= 0)
                array[j][word_len] = *(buf + word_len);
            printf("%s\n", array[j]);
            printf("[buf=%s]", buf);
            while (*(buf + i) == c)
              i++;
            j++;
        }
        else
            i++;
    }
    return (array);
}
/*
static void			ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void			ft_print_tabstr(char **tabstr)
{
	int		i;

	i = 0;
	while (tabstr[i] != '\0')
	{
		ft_print_result(tabstr[i]);
		write(1, "\n", 1);
		free(tabstr[i]);
		i++;
	}
	free(tabstr);
}

static void			check_split(char *s, char c)
{
	char	**tabstr;

	if (!(tabstr = ft_split(s, c)))
		ft_print_result("NULL");
	else
		ft_print_tabstr(tabstr);
}
*/
int		main(int argc, const char *argv[])
{
	//int		arg;

	(void)argc;
	(void)argv;
	//if (argc == 1)
	//	return (0);
	//if ((arg = atoi(argv[1])) == 1)
	//	check_split("          ", ' ');
	//else if (arg == 2)
	//	check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	//else if (arg == 3)
	//	check_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	//else if (arg == 4)
	//	check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	//else if (arg == 5)
	//	check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	//else if (arg == 6)
		ft_split("..I..told..you..I..was..trouble....", '.');
	return (0);
}
