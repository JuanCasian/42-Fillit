/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinit_piecesloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 20:12:54 by syamada           #+#    #+#             */
/*   Updated: 2018/07/16 20:19:20 by syamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	reinit_piecesloc(t_tetri **tetris)
{
	int		i;

	 i = 0;
	while (tetris[i]->is_end != 1)
	{
		tetris[i]->pieces[0].x = -1;
		tetris[i]->pieces[0].y = 0;
		i++;
	}
}
