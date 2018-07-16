/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cvt_threedim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 15:45:03 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 18:16:05 by syamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

static char	*ft_strndup(char *str, int len)
{
	int		i;
	char	*res;

	i = 0;
	if (!(res = ft_strnew(len)))
		return (NULL);
	while (i < len)
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}

char		***cvt_threedim(char *input, int n_blocks)
{
	char	***res;
	int		piece;
	int		line;

	piece = 0;
	if (!(res = (char***)malloc(sizeof(char**) * n_blocks + 1)))
		return (NULL);
	while (piece < n_blocks)
	{
		line = 0;
		if (!(res[piece] = (char**)malloc(sizeof(char*) * 5)))
			return (NULL);
		while (line < 4)
		{
			if (!(res[piece][line++] = ft_strndup(input, 4)))
				return (NULL);
			input = input + 5;
		}
		res[piece][line] = NULL;
		piece++;
		input = input + 1;
	}
	res[piece] = NULL;
	return (res);
}
