/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:51:41 by syamada           #+#    #+#             */
/*   Updated: 2018/07/15 22:09:00 by syamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

static char	*is_validsquare(char *str)
{
	int		row;
	int		line;

	line = 0;
	while (line++ != 4)
	{
		row = 0;
		while (*str != '\n')
		{
			row++;
			str++;
		}
		if (row != 4)
			return (NULL);
		str++;
	}
	return (str);
}

int			num_of_square(char *str)
{
	int		count;

	count = 0;
	while (*str)
	{
		if (!(str = is_validsquare(str)))
			return (0);
		count++;
		str++;
	}
	return (count);
}
