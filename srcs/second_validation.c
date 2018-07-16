/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_validation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 20:17:10 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 22:26:32 by syamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

static int	*init_pieces(void)
{
	int	*pieces;

	if (!(pieces = (int*)malloc(sizeof(int) * 4)))
		put_error();
	pieces[0] = 0;
	pieces[1] = 0;
	pieces[2] = 0;
	pieces[3] = 0;
	return (pieces);
}

static int	check_piece(char **str)
{
	t_pos	curr;
	int		*pieces;
	int		res;
	int		i;

	curr.y = -1;
	i = 0;
	pieces = init_pieces();
	while (++curr.y < 4)
	{
		curr.x = 0;
		while (curr.x < 4)
		{
			if (str[curr.y][curr.x] == '#')
			{
				pieces[i] = check_conections(curr, str);
				if ((i = i + 1) > 4)
					return (0);
			}
			curr.x = curr.x + 1;
		}
	}
	if ((res = pieces[0] + pieces[1] + pieces[2] + pieces[3]) < 6)
		return (0);
	return (1);
}

int			second_validation(char ***str, int n_pieces)
{
	int	valid_pieces;
	int curr_piece;

	valid_pieces = 0;
	curr_piece = 0;
	while (curr_piece < n_pieces)
	{
		if (check_piece(str[curr_piece]))
			valid_pieces++;
		curr_piece++;
	}
	if (valid_pieces == n_pieces)
		return (1);
	return (0);
}
