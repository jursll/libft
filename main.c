/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:51:05 by julrusse          #+#    #+#             */
/*   Updated: 2024/10/06 17:35:11 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

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
