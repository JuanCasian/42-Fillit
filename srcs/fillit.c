/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:54:24 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/16 16:29:10 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	fillit(int fd)
{
	t_tetri	*tetris;
	char	**board;
	int		n_tetris;
	int		boardsize;

	n_tetris = 0;
	tetris = read_input(fd);
	while (tetris[n_tetris].is_end != 1)
		n_tetris++;
	boardsize = ft_sqrtint(n_tetris * 4);
	board = create_board(boardsize);
	board = solve(board, boardsize, tetris);
}
