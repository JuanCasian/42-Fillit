/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:51:41 by syamada           #+#    #+#             */
/*   Updated: 2018/07/14 21:58:57 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

static char	*is_square(char *str)
{
	int		i;
	int		line;

	line = 0;
	while (line != 4)
	{
		i = 0;
		while (*str != '\n')
		{
			i++;
			str++;
		}
		if (i != 4)
			return (NULL);
		line++;
		str++;
	}
	return (str);
}

int			validate_input(char	*str)
{
	while (*str)
	{
		if (!(str = is_square(str)))
			return (0);
		str++;
	}
	return (1);
}
