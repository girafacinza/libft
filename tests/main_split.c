#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static int	ft_countstr(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count + 1);
}

static void	ft_allocatearray(char **array, char const *s, char c)
{
	int lastc_posit;
	int i;

	i = 0;
	lastc_posit = 0;
	while (*(s + i))
	{
		if (s[i] == c || s[i + 1] == '\0')
		{
			array[i] = (char *)malloc(sizeof(char) * (i - lastc_posit + 1));
			lastc_posit = i + 1;
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

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (NULL != (array = (char **)malloc(ft_countstr(s, c)* sizeof(char *))))
	{
		printf(".");
		ft_allocatearray(array, s, c);
		ft_populatearray(array, s, c);
		return (array);
	}
	return (NULL);
}

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
int		main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	if ((arg = atoi(argv[1])) == 1)
		check_split("          ", ' ');
	else if (arg == 2)
		check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	else if (arg == 3)
		check_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	else if (arg == 4)
		check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	else if (arg == 5)
		check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	return (0);
}
