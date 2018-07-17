/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 12:47:16 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 12:47:18 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	*ft_filetostr(int fd)
{
	char	buf[BUFSIZE];
	int		n;
	char	*str;
	size_t	len;

	len = 0;
	str = NULL;
	while ((n = read(fd, buf, BUFSIZE)))
	{
		if (n < 0)
			put_error();
		str = (char*)ft_remalloc((void*)str, len + n + 1, len);
		str = (char*)ft_memcpy(str + len, buf, n);
		len += n;
		str[len] = '\0';
	}
	return (str);
}
