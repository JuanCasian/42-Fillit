/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fornextspace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 19:35:37 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/16 21:18:38 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

static int	is_inbound(int	checker, int boardsize)
{
	if (checker >= 0 && checker < boardsize)
		return (1);
	else
		return (0);
}

t_pos		get_absloc(t_pos master, t_pos rel)
{
	t_pos	abs;
	
	abs.x = master.x + rel.x;
	abs.y = master.y + rel.y;
	return (abs);
}

static int look_instr(t_pos mypos, char **board)
{
	if (board[mypos.y][mypos.x] == '.')
		return (1);
	return (0);
}

static int		check_allpieces(char **board, t_tetri currt, int bs)
{
	t_pos	abs_loc;
	int i;

	i = 1;
	if (!(look_instr(currt.pieces[0], board)))
		return (0);
	while (i < 4)
	{
		abs_loc = get_absloc(currt.pieces[0], currt.pieces[i]);
		if (!(is_inbound(abs_loc.x, bs)) || !(is_inbound(abs_loc.y, bs)))
			return (0);
		if (!(look_instr(abs_loc, board)))
			return (0);
		i++;
	}
	return (1);
}

t_pos		check_fornextspace(char **board, t_tetri currt, int boardsize)
{
	t_pos	final_pos;

	while (1)
	{
		currt.pieces[0].x = currt.pieces[0].x + 1;
		if (is_inbound(currt.pieces[0].x, boardsize))
			if (check_allpieces(board, currt, boardsize))
			{
				final_pos.x = currt.pieces[0].x;
				final_pos.y = currt.pieces[0].y;
				return (final_pos);
			}
		else
			if (is_inbound(++currt.pieces[0].y, boardsize))
				currt.pieces[0].x = -1;
			else
			{
				final_pos.x = -1;
				final_pos.y = -1;
				return (final_pos);
			}
	}
}
