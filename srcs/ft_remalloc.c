/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:34:42 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/14 21:11:54 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_remalloc(void *ptr, size_t size, size_t curr)
{
	void	*newptr;
	size_t	len;

	if (!(newptr = (void*)malloc(size)))
		return (NULL);
	newptr = ft_memcpy(newptr, ptr, curr);
	free(ptr);
	return (newptr);
}
