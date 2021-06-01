#include <stdio.h>
#include "../libft.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


char f(unsigned int n, char c)
{
    return ((char)(c + n));
}

int	main(int argc, char *argv[])
{
	printf("Start Tests\n");
	printf("*****\n");
	printf("Testing ft_toupper\n");
	if ((toupper('a') == ft_toupper('a')) && (toupper('1') == ft_toupper('1'))
		&& (toupper('A') == ft_toupper('A')) && (toupper('$') == ft_toupper('$'))
		&& (toupper(' ') == ft_toupper(' ')))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_tolower\n");
	if ((tolower('a') == ft_tolower('a')) && (tolower('1') == ft_tolower('1'))
		&& (tolower('A') == ft_tolower('A')) && (tolower('$') == ft_tolower('$'))
		&& (tolower(' ') == ft_tolower(' ')))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");

	printf("*****\n");
	printf("Testing ft_strlen\n");
	if ((strlen("") == ft_strlen("")) && (strlen(" ") == ft_strlen(" "))
		&& (strlen("!f~ %§") == ft_strlen("!f~ %§")))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_isprint\n");
	if ((ft_isprint(' ') > 0) && (ft_isprint('f') > 0 )
		&& (isprint(127) == ft_isprint(127)) && (isprint(31) == ft_isprint(31)))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_isascii\n");
	if ((ft_isascii(' ') > 0) && (ft_isascii(0) > 0 )
		&& (isascii(128) == ft_isascii(128)) && (isascii(-5) == ft_isascii(-5)))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_isalnum\n");
	if ((ft_isalnum('f') > 0) && (ft_isalnum('5') > 0 )
		&& (isalnum('=') == ft_isalnum('=')) && (isalnum('$') == ft_isalnum('$')))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_isdigit\n");
	if ((ft_isdigit('2') > 0) && (ft_isdigit('0') > 0 )
		&& (isdigit('=') == ft_isdigit('=')) && (isdigit('$') == ft_isdigit('$')))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_isalpha\n");
	if ((ft_isalpha('f') > 0) && (ft_isalpha('A') > 0 )
		&& (isalpha('4') == ft_isalpha('4')) && (isalpha('$') == ft_isalpha('$')))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_atoi\n");
	if ((atoi("5") == ft_atoi("5")) && (atoi("-5") == ft_atoi("-5"))
		&& (atoi("   5") == ft_atoi("   5")) && (atoi("   +5") == ft_atoi("   +5"))
		&& (atoi("   ++5") == ft_atoi("   ++5")) && (atoi("   +   5") == ft_atoi("   +   5"))
		&& (atoi("   +-5") == ft_atoi("   +-5")) && (atoi("   +5a55") == ft_atoi("   +5a55")))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_strncmp\n");
	if ((strncmp("54321abc", "54321aBc", 5) == 0) && (strncmp("54321abc", "54321aBc", 7) > 0) 
			&& (strncmp("54321aBc", "54321abc", 7) < 0) )
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_strchr\n");
	char test_strchr[15] = "Hello World";
	if ((ft_strchr(test_strchr, 'x') == NULL)	&& (ft_strchr(test_strchr, 'o') == test_strchr + 4))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_strrchr\n");
	char test_strrchr[15] = "Hello World";
	if ((ft_strrchr(test_strrchr, 'x') == NULL)	&& (ft_strrchr(test_strrchr, 'o') == test_strrchr + 7))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_strnstr\n");
	char test_strnstr[15] = "Hello World";
	if ((ft_strnstr(test_strnstr, "Wor", 5) == NULL) && (ft_strnstr(test_strnstr, "", 5) == test_strnstr)
		&& (ft_strnstr(test_strnstr, "Wor", 15) == test_strnstr + 6) && (ft_strnstr(test_strnstr, "Wor", 8) == NULL) )
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_strlcat\n");
	char test_strlcat1[15] = "Hello";
	char test_strlcat2[15] = " World";
	ft_strlcat(test_strlcat1, test_strlcat2, 14);
	if (!ft_strncmp(test_strlcat1, "Hello World", 12))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_strlcpy\n");
	char test_strlcpy1[15] = "Hello";
	char test_strlcpy2[15] = " World";
	ft_strlcpy(test_strlcpy1, test_strlcpy2, 14);
	if (!ft_strncmp(test_strlcpy1, " World", 12))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
		
	printf("*****\n");
	printf("Testing ft_bzero\n");
	char test_bzero[15] = "Hello";
	ft_bzero(test_bzero, 3);
	if ((test_bzero[0] == 0) && (test_bzero[1] == 0) && (test_bzero[2] == 0)
		&& (test_bzero[3] == 'l') && (test_bzero[4] == 'o') )
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_memset\n");
	char test_memset[15] = "Hello";
	ft_memset(test_memset, '-', 3);
	if ((test_memset[0] == '-') && (test_memset[1] == '-') && (test_memset[2] == '-')
		&& (test_memset[3] == 'l') && (test_memset[4] == 'o') )
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");

	printf("*****\n");
	printf("Testing ft_memcpy\n");
	char test_memcpy[15] = "Hello World";
	ft_memcpy(test_memcpy, test_memcpy + 6, 5);
	if (!ft_strncmp(test_memcpy, "World World", 12) )
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_memccpy\n");
	char test_memccpy[15] = "Hello";
	ft_memccpy(test_memccpy, "Worldxa", 'd', 15);
	if (!ft_strncmp(test_memccpy, "World", 12) )
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");

	printf("*****\n");
	printf("Testing ft_memmove\n");
	char test_memmove[15] = "Hello World";
	ft_memmove(test_memmove, test_memmove + 6, 5);
	if (!ft_strncmp(test_memmove, "World World", 12) )
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");

	printf("*****\n");
	printf("Testing ft_memchr\n");
	char test_memchr[15] = "Hello World";
	if ((ft_memchr(test_memchr, 'x', 5) == NULL)	&& (ft_memchr(test_memchr, 'o', 5) == test_memchr + 4) && (ft_memchr(test_memchr, 'o', 4) == NULL))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_memcmp\n");
	if ((memcmp("54321abc", "54321aBc", 5) == 0) && (memcmp("54321abc", "54321aBc", 7) > 0) 
			&& (memcmp("54321aBc", "54321abc", 7) < 0) )
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	
	printf("*****\n");
	printf("Testing ft_calloc\n");
	char *test_calloc = ft_calloc(5, sizeof(char));
	if ((test_calloc[0] == '\0') && (test_calloc[4]== '\0'))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	free(test_calloc);
	
	printf("*****\n");
	printf("Testing ft_strdup\n");
	char test_strdup[15] = "Hello World";
	char *test_strdupdup = ft_strdup(test_strdup);
	if ((memcmp(test_strdupdup, test_strdup, 5) == 0) && (memcmp(test_strdupdup, "Hello  World", 7) > 0))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	free(test_strdupdup);
	
	printf("*****\n");
	printf("Testing ft_substr\n");
	char *test_substr_new = ft_substr(test_strdup, 3, 6);
	if ((test_substr_new) && (strlen(test_substr_new) == 6) && (test_substr_new[0] == 'l') && (test_substr_new[5] == 'r'))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	if (argc > 1 && !(ft_memcmp(argv[1], "include_NULL", 12)))
	{
		if (ft_substr(NULL, 3, 6) == NULL)
			printf("NULL OK\n");
		else
			printf("NULL KO :(     <------------------------------------------------\n");
	}
	free(test_substr_new);
	
	printf("*****\n");
	printf("Testing ft_strjoin\n");
	char *test_strjoin_new = ft_strjoin("Hello", " World");
	if ((test_strjoin_new) && (strlen(test_strjoin_new) == 11) && (test_strjoin_new[0] == 'H') && (test_strjoin_new[10] == 'd'))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	if (argc > 1 && !(ft_memcmp(argv[1], "include_NULL", 12)))
	{
		if ((ft_strjoin(NULL, "Hello") == NULL) && (ft_strjoin("Hello", NULL) == NULL))
			printf("NULL OK\n");
		else
			printf("NULL KO :(     <------------------------------------------------\n");
	}
	free(test_strjoin_new);
	
	printf("*****\n");
	printf("Testing ft_strtrim\n");
	char *test_strtrim_new = ft_strtrim("121122ab1212ab111222", "12");
	if ((test_strtrim_new) && (strlen(test_strtrim_new) == 8) && (test_strtrim_new[0] == 'a') && (test_strtrim_new[2] == '1'))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	if (argc > 1 && !(ft_memcmp(argv[1], "include_NULL", 12)))
	{
		if ((ft_strtrim(NULL, "Hello") == NULL) && (ft_strtrim("Hello", NULL) == NULL))
			printf("NULL OK\n");
		else
			printf("NULL KO :(     <------------------------------------------------\n");
	}
	free(test_strtrim_new);
	
	printf("*****\n");
	printf("Testing ft_split\n");
	char **test_ft_split = ft_split("aaa111a2aaaaaa33333aa", 'a');
	if ((test_ft_split) && (test_ft_split[3] == NULL) && (!strcmp(test_ft_split[0], "111")) && (!strcmp(test_ft_split[1], "2"))
		&& (!strcmp(test_ft_split[2], "33333")) && (strlen(test_ft_split[0]) == 3) && (strlen(test_ft_split[1]) == 1)
		&& (strlen(test_ft_split[2]) == 5))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	if (argc > 1 && !(ft_memcmp(argv[1], "include_NULL", 12)))
	{
		if (ft_split(NULL, 'a') == NULL)
			printf("NULL OK\n");
		else
			printf("NULL KO :(     <------------------------------------------------\n");
	}
	free(test_ft_split[0]);
	free(test_ft_split[1]);
	free(test_ft_split[2]);
	free(test_ft_split[3]);
	free(test_ft_split);
	
	printf("*****\n");
	printf("Testing ft_strmapi\n");
	char *test_strmapi = ft_strmapi("1234", f);
	if ((test_strmapi) && (test_strmapi[0] == '1') && (test_strmapi[1] == '3')
		&& (test_strmapi[2] == '5') && (test_strmapi[3] == '7') && (strlen(test_strmapi) == 4))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	if (argc > 1 && !(ft_memcmp(argv[1], "include_NULL", 12)))
	{
		if (((ft_strmapi)(NULL, f) == NULL) && ((ft_strmapi)("1234", NULL) == NULL))
			printf("NULL OK\n");
		else
			printf("NULL KO :(     <------------------------------------------------\n");
	}
	free(test_strmapi);
	
	printf("*****\n");
	printf("Testing ft_itoa\n");
	char *test_ft_itoa0 = ft_itoa(0);
	char *test_ft_itoa1 = ft_itoa(5);
	char *test_ft_itoa2 = ft_itoa(-10);
	char *test_ft_itoa3 = ft_itoa(2147483647);
	char *test_ft_itoa4 = ft_itoa(-2147483648);
	if (!(strcmp(test_ft_itoa0, "0")) && !(strcmp(test_ft_itoa1, "5")) && !(strcmp(test_ft_itoa2, "-10"))
		&& !(strcmp(test_ft_itoa3, "2147483647")) && !(strcmp(test_ft_itoa4, "-2147483648")))
		printf("OK\n");
	else
		printf("KO :(     <------------------------------------------------\n");
	free(test_ft_itoa0);
	free(test_ft_itoa1);
	free(test_ft_itoa2);
	free(test_ft_itoa3);
	free(test_ft_itoa4);
	
	printf("*****\n");
	printf("Testing ft_putchar_fd\n");
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('b', 2);
	ft_putchar_fd('\n', 1);

	printf("*****\n");
	printf("Testing ft_putstr_fd\n");
	ft_putstr_fd("Hello", 1);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("42\n", 2);
	
	printf("*****\n");
	printf("Testing ft_putendl_fd\n");
	ft_putendl_fd("Hello", 1);
	ft_putendl_fd("42\n", 2);
	
	printf("*****\n");
	printf("Testing ft_putnbr_fd\n");
	ft_putnbr_fd(0, 1);
	ft_putstr_fd("\n", 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putstr_fd("\n", 1);
	ft_putnbr_fd(-2147483648, 2);
	ft_putstr_fd("\n", 1);
	
	printf("\n***************\n");
	printf("libc testing done :)\n");
	printf("***************\n\n");
	
	return (0);
}