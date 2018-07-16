/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 13:29:01 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/16 14:51:13 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**create_board(int size)
{
	int		i;
	char	**res;
	int		j;

	i = 0;
	if (!(res = (char**)malloc(sizeof(char*) * size + 1)))
		put_error();
	while (i < size)
	{
		if (!(res[i] = (char*)malloc(sizeof(char) * size + 1)))
			put_error();
		j = 0;
		while (j < size)
		{
			res[i][j] = '.';
			j++;
		}
		res[i][j] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}
