#include <stdio.h>
#include <stdlib.h>
# define INT_MIN -2147483648

static int	ft_intsize(int n, int size)
{
	if (n < 10)
		return (size + 1);
	return (ft_intsize(n / 10, size + 1));
}

static void	ft_transform(int i, int n, char *nbr, int size)
{
	if (n < 0)
	{
		nbr[0] = '-';
		if (n == INT_MIN)
		{
			nbr[size - 1] = (n % 10) + 48;
			return (ft_transform(1, -(n / 10), nbr, size));
		}
		return (ft_transform (1, -n, nbr, size))
	}
	if (i < size && !nbr[i])
	{
		nbr[i] = (n % 10) + 48;
		return (ft_transform(i + 1, n / 10, nbr, size));
	}



	
		nbr[siz]
}

char		*ft_itoa(int n)
{
	int		len;
	char	*nbr;

	len = (n >= 0) ? (ft_intsize(n, 0)) : (ft_intsize(-n, 1));
	if (NULL != (nbr = (char *)malloc((len + 1) * sizeof(char))))
	{
		ft_transform(0, n, nbr, len);
	}
	return(NULL);
}

int		main(int argc, char **argv)
{
	(void)argc;
	ft_itoa(atoi(argv[1]));
	return (0);
}
