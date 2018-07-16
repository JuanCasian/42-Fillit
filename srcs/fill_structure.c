/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_structure.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 17:41:12 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 22:19:51 by syamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

static t_pos	*init_pos(t_pos *pieces)
{
	pieces[0].x = 0;
	pieces[0].y = 0;
	return (pieces);
}

static t_pos	*set_prepos(int x, int y)
{
	t_pos	*pre;

	pre = (t_pos *)malloc(sizeof(t_pos));
	pre->x = x;
	pre->y = y;
	return (pre);
}

static void		set_pos(int x, int y, t_pos *pre, t_pos *piece)
{
	piece->x = x - pre->x;
	piece->y = y - pre->y;
}

static t_pos	*get_positions(char **dstr)
{
	t_pos	*pieces;
	t_pos	*pre;
	int		i;
	int		x;
	int		y;

	i = 1;
	y = 0;
	pre = NULL;
	pieces = (t_pos *)malloc(sizeof(t_pos) * 4);
	pieces = init_pos(pieces);
	while (dstr[y])
	{
		x = 0;
		while (dstr[y][x])
		{
			if (dstr[y][x] == '#' && !pre)
				pre = set_prepos(x, y);
			else if (dstr[y][x] == '#')
				set_pos(x, y, pre, &pieces[i++]);
			x++;
		}
		y++;
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
