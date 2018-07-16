/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_structure.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 17:41:12 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 17:59:21 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

static pos	*get_positions(char **dstr)
{
	pos		pieces[4];

}

tetri		*fill_structure(char ***tstr, int n_blocks)
{
	tetri	*res;
	int		i;

	i = 0;
	if (!(res = (tetri*)malloc(sizeof(tetri) * n_blocks + 1)))
		return (NULL);
	while (i < n_blocks)
	{
		res[i]->pieces = get_positions(tstr[i]);
	}
}
