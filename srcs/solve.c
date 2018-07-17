/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 18:44:44 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/16 21:42:29 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**solve(char **board, int boardsize, t_tetri *tetris)
{
	t_pos	next_pos;
	int		curr;

	curr = 0;
	while (1)
	{
		next_pos = check_fornextspace(board, tetris[curr], boardsize);
		if (next_pos.y == -1)
			if (tetris[curr].name == 'A')
			{
				board = create_board(++boardsize);
				reinit_piecesloc(&tetris);
				curr = 0;
			}
			else
			{
				board = remove_piece(tetris[curr - 1], board, &curr);
				reinit_npiecesloc(&tetris, curr);
			}
		else
		{
			tetris[curr].pieces[0] = next_pos;
			board = add_piece(tetris[curr++], board);
			if (tetris[curr].is_end == 1)
				return (board);
		}
	}
	return (NULL);
}
