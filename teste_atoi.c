#include <stdio.h>
#include <stdlib.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

static int	ft_isspace(const char str)
{
	return ((str == '\t' || str == '\n' || str == '\v' ||
			str == '\f' || str == '\r' || str == ' ') ? (1) : (0));
}
int		ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	long int	nbr;
	int			signe;

	nbr = 0;
	signe = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signe = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		nbr = nbr * 10 + (*str - 48);
		if (nbr > INT_MAX && signe == 1)
			return (-1);
		if (nbr > -INT_MIN && signe == -1)
			return (0);
		str++;
	}
	return (nbr * signe);
}
int main(void)
{
	char n[40] = "-99999";
	int i1 = ft_atoi(n);
	printf("%d\n", i1);
	char n2[40] = "-9999999999999999999999";
    int i2 = ft_atoi(n2);
	printf("%d\n", i2);
	return(0);
}
