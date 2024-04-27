/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmei <rmei@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:20:21 by rmei              #+#    #+#             */
/*   Updated: 2024/04/27 13:41:09 by rmei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

/* Allocates memory (set to 0) for an array with *n members* of *size* bytes.
 * Returns a ptr to the allocated memory, or a unique ptr in case either nmemb
 * or size is 0. If the memory required would cause integer overflow or there is
 * no available memory to allocate, it sets errno to ENOMEM and returns NULL. */
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			mem_req;
	size_t			int_overflow;
	unsigned char	*array;

	if (!nmemb || !size)
		return ((void *) malloc(1));
	mem_req = nmemb * size;
	int_overflow = (mem_req < nmemb || mem_req < size);
	if (int_overflow)
	{
		errno = ENOMEM;
		return (NULL);
	}
	array = (void *) malloc(mem_req);
	if (!array)
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (mem_req)
		array[--mem_req] = 0;
	return (array);
}
