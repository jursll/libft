/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:51:05 by julrusse          #+#    #+#             */
/*   Updated: 2024/10/09 16:47:33 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str);

int	main(void)
{
	printf("Test 1: %d\n", ft_atoi("   \t\n\f42abc"));
	printf("Test 2: %d\n", ft_atoi("-123"));
	printf("test 3: %d\n", ft_atoi("+456xyz"));
	return (0);
}

/*
// strnstr
char *ft_strnstr(const char *str, const char *substr, size_t len);

int	main(void)
{
	char *str = "Hello, World!";
	char *substr = "World";
	char *result;

	result = ft_strnstr(str, substr, 13);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found");

	result = ft_strnstr(str, substr, 5);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("not found");

	return (0);
}
*/

/*
// memcmp
int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char s1[] = "Hello";
	char s2[] = "Helzo";

	printf("Test 1: %d\n", ft_memcmp(s1, s2, 5));
	printf("Test 2: %d\n", ft_memcmp(s1, s2, 3));
	printf("Test 3: %d\n", ft_memcmp(s1, s1, 5));
	return (0);
}
*/

/*
// memchr
void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	char s[] = "Hello, World!";
	char *result;

	result = ft_memchr(s, 'o', 13);
	if (result)
		printf("Char found: %s\n", result);
	else
		printf("Char not found\n");

	result = ft_memchr(s, 'z', 13);
	if (result)
		printf("Char found: %s\n", result);
	else
		printf("Char not found\n");

	return (0);
}
*/

/*
// strncmp
int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	const char s1[] = "Hello, World!";
	const char s2[] = "Hello, World!";
	const char s3[] = "Hello, everyone!";
	const char s4[] = "Hi";

	printf("Test 1: same, n = 5, %d.\n", ft_strncmp(s1, s2, 5));
	printf("Test 2: same, n = 13, %d.\n", ft_strncmp(s1, s2, 13));
	printf("Test 3: not same, n = 7, %d.\n", ft_strncmp(s1, s3, 7));
	printf("Test 4: not same, n = 13, %d.\n", ft_strncmp(s1, s3, 13));
	printf("Test 5: s2 is too short, n = 5, %d.\n", ft_strncmp(s1, s4, 5));
	return (0);
}
*/

/*
// strchr - strrchr
char	*ft_strrchr(const char *s, int i);

int	main(void)
{
	char str1[] = "Hello, World!";
	char c1 = 'o';
	char *result1 = ft_strrchr(str1, c1);

	if (result1)
		printf("Test 1 - Trouvé : '%c' dans \"%s\" à la position : %ld\n", c1, str1, result1 - str1);
	else
		printf("Test 1 - Caractère '%c' non trouvé dans \"%s\"\n", c1, str1);

	char c2 = 'z';
	char *result2 = ft_strrchr(str1, c2);

	if (result2)
		printf("Test 2 - Trouvé : '%c' dans \"%s\" à la position : %ld\n", c2, str1, result2 - str1);
	else
		printf("Test 2 - Caractère '%c' non trouvé dans \"%s\"\n", c2, str1);

	char c3 = '\0';
	char *result3 = ft_strrchr(str1, c3);

	if (result3)
		printf("Test 3 - Caractère '\\0' trouvé à la fin de la chaîne \"%s\"\n", str1);
	else
		printf("Test 3 - Caractère '\\0' non trouvé\n");

	return (0);
}
*/

/*
// toupper - tolower
int	ft_tolower(int c);

int	main(int ac, char **av)
{
	if (ac == 2 && av[1][0] !=0)
	{
		unsigned char c = (unsigned char)av[1][0];
		printf("%c", ft_tolower(c));
	}
	else
		printf("nope");
	return (0);
}
*/

/*
// strlcpy - strlcat
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	char		c[20] = "Hello";
	const char	*x = " World";
	size_t		result;

	result = ft_strlcat(c, x, sizeof(c));
	printf("Resultat: %s, longueur totale: %zu\n", c, result);

	char		c2[10] = "Hello";
	result = ft_strlcat(c2, x, 7);
	printf("Resultat %s, longueur totale: %zu\n", c2, result);
	
	char c3[20] = "Hi";
	result = ft_strlcat(c3, x, 15);
	printf("Resultat %s, longueur totale %zu\n", c3, result);
	return (0);
}
*/

/*
// memset - bzero - memcpy - memmove
void	ft_memmove(void *dst, const void *src, size_t len);

int	main(void)
{
	char	c[] = "Hello World!";
	char	x[] = "ABCDEF";

	ft_memmove(c, x, 2);
	printf("%s", c);
	return (0);
}
*/

/*
// strlen
size_t	ft_strlen(const char *s);

int	main(void)
{
	char c[] = "Hello World !";

	printf("%zu", ft_strlen(c));
	return (0);
}
*/

/*
// isalpha - isdigit - isalnum - isascii - isprint
int	ft_isprint(int c);

int	main(int ac, char **av)
{
	if (ac == 2 && av[1][0] !=0)
	{
		unsigned char c = (unsigned char)av[1][0];
		printf("%d", ft_isprint(c));
	}
	else
			printf("nope");
	return (0);
}
*/
