/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:31:01 by julrusse          #+#    #+#             */
/*   Updated: 2024/10/10 15:41:39 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	b;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if ((size_t)(-1) / count < size)
		return (NULL);
	b = count * size;
	ptr = malloc(b);
	if (ptr == NULL)
		return (NULL);
	else
		ft_bzero(ptr, b);
	return (ptr);
}
