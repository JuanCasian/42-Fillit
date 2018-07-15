/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:35:09 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/14 21:10:18 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	*input_tostr(int fd)
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
		{
			ft_putendl_fd("error", 2);
			exit (EXIT_FAILURE);
		}
		str = (char*)ft_remalloc((void*)str, len + n + 1, len);
		str = (char*)ft_memcpy(str + len, buf, n);
		len += n;
		str[len] = '\0';
	}
	return (str);
}

void	read_input(int fd)
{
	char	*input_str;

	input_str = input_tostr(fd);
	ft_putendl(input_str);
}
