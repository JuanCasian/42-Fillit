/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_structure.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 17:41:12 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 19:04:58 by syamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

static t_pos	*get_positions(char **dstr)
{
	t_pos	*pieces;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	pieces = (t_pos *)malloc(sizeof(t_pos) * 4);
	while (dstr[j])
	{
		k = 0;
		while (dstr[j][k])
		{
			if (dstr[j][k] == '#')
			{
				pieces[i].x = k;
				pieces[i].y = j;
				i++;
			}
			k++;
		}
		j++;
	}
	return (pieces);
}

t_tetri			*fill_structure(char ***tstr, int n_blocks)
{
	t_tetri	*res;
	int		i;
	char	name;

	i = 0;
	name = 'A';
	if (!(res = (t_tetri *)malloc(sizeof(t_tetri) * n_blocks + 1)))
		return (NULL);
	while (i < n_blocks)
	{
		res[i].pieces = get_positions(tstr[i]);
		res[i].name = name++;
		res[i].is_end = 0;
		i++;
	}
	res[i].is_end = 1;
	return (res);
}
