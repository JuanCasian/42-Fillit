/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_manipulation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 20:54:10 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/16 21:18:40 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	**add_piece(t_tetri tetra, char **board)
{
	int		i;
	t_pos	abs;

	i = 1;
	*curr = *curr - 1;
	board[tetra.pieces[0].y][tetra.pieces[0].x] = tetra.name;
	while (i < 4)
	{
		abs = get_absloc(tetra.piece[0], tetra.piece[i]);
		board[abs.y][abs.x] = tetra.name;
		i++;
	}
	return (board);
}

char	**remove_piece(t_tetri tetra, char **board, int	*curr)
{
	int		i;
	t_pos	abs;

	i = 1;
	*curr = *curr - 1;
	board[tetra.pieces[0].y][tetra.pieces[0].x] = '.';
	while (i < 4)
	{
		abs = get_absloc(tetra.piece[0], tetra.piece[i]);
		board[abs.y][abs.x] = '.';
		i++;
	}
	return (board);
}
