
#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char c;
	char str1[50];
	char str2[50];
	int i;
	int num;
/*
	do
	{
		printf("\nDigite um caractere (S para sair): ");
		scanf("%c", &c);
		getchar();
		printf("isalpha\t%d\tft: %d\n", isalpha(c), ft_isalpha(c));
		printf("isdigit\t%d\tft: %d\n", isdigit(c), ft_isdigit(c));
		printf("isalnum\t%d\tft: %d\n", isalnum(c), ft_isalnum(c));
		printf("isprint\t%d\tft: %d\n", isprint(c), ft_isprint(c));
		printf("isascii\t%d\tft: %d\n", isascii(c), ft_isascii(c));
		printf("toupper\t%c\tft: %c\n", toupper(c), ft_toupper(c));
		printf("tolower\t%c\tft: %c\n", tolower(c), ft_tolower(c));
	} while(c != 'S');
*/
	strcpy(str1,"Hello");
	strcpy(str2," world!");
	printf("\nsrc = %s\nstrlen\t%lu\tft: %lu\n\n", str1, strlen(str1),ft_strlen(str1));

	printf("\nsrc = %s, dst = %s\n", str2, str1);
	i = 0;
	while (i < 20)
	{
		printf("dstsize = %d\n", i); 
		strcpy(str1,"Hello");
		printf("strlcat:\treturn: %lu; dst: %s\n", strlcat(str1,str2,i), str1);
		strcpy(str1,"Hello");
		printf("ft_strlcat\treturn: %lu; dst: %s\n", ft_strlcat(str1,str2,i), str1);
		i += 9;
	}
/*memset*/
	c = 'a';
	printf("c = %c\n", c);
	memset(&c, 43, 1);
	printf("memset(&c, 43, 1): %c\t", c);
	c = 'a';
	ft_memset(&c, 43, 1);
	printf("ft_memset(&c, 43, 1): %c\n", c);

	num = 66;
	printf("num = %d\n", num);
	memset(&num, 50, 1);
	printf("memset(&num, 50, 1): %d\t", num);
	num = 66;
	ft_memset(&num, 50, 1);
	printf("ft_memset(&num, 50, 1): %d\n", num);
	printf("\n");

/*bzero
	c = 'a';
	printf("c = %c\n", c);
	bzero(&c, 1);
	printf("bzero(&c, 1): %c\t", c);
	c = 'a';
	ft_bzero(&c, 1);
	printf("ft_bzero(&c, 1): %c\n", c);

	strcpy(str1,"42 sao paulo");
	printf("str1 = %s\n", str1);
	bzero(str1, 5);
	printf("bzero(str1, 5): %s\t", str1);
	strcpy(str1,"42 sao paulo");
	ft_bzero(str1, 5);
	printf("ft_bzero(str1, 5): %s\n", str1);
	printf("\n");
*/
/*memcpy*/
	strcpy(str1,"testando uma string");
	strcpy(str2,"outra string pra teste");
	memcpy(str1,str2,12);
	printf("str1 = %s", str1); 



	return (0);	
}
