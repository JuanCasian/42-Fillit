/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinit_piecesloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 20:12:54 by syamada           #+#    #+#             */
/*   Updated: 2018/07/16 20:59:15 by syamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	reinit_piecesloc(t_tetri **tetris)
{
	int		i;
	t_tetri	*tr;

	 i = 0;
	 tr = *tetris;
	while (tr[i].is_end != 1)
	{
		tr[i].pieces[0].x = -1;
		tr[i].pieces[0].y = 0;
		i++;
	}
}

void	reinit_npiecesloc(t_tetri **tetris, int start)
{
	int		i;
	t_tetri	*tr;

	 i = start + 1;
	 tr = *tetris;
	while (tr[i].is_end != 1)
	{
		tr[i].pieces[0].x = -1;
		tr[i].pieces[0].y = 0;
		i++;
	}
}
