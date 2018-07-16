/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conections_helpers.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 22:30:28 by syamada           #+#    #+#             */
/*   Updated: 2018/07/15 22:31:41 by syamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	in_bounds(t_pos curr)
{
	if (curr.x >= 0 && curr.x <= 3)
		if (curr.y >= 0 && curr.y <= 3)
			return (1);
	return (0);
}

int	check_left(t_pos curr, char **str)
{
	curr.x = curr.x - 1;
	if (in_bounds(curr))
	{
		if (str[curr.y][curr.x] == '#')
			return (1);
	}
	return (0);
}

int	check_right(t_pos curr, char **str)
{
	curr.x = curr.x + 1;
	if (in_bounds(curr))
	{
		if (str[curr.y][curr.x] == '#')
			return (1);
	}
	return (0);
}

int	check_down(t_pos curr, char **str)
{
	curr.y = curr.y - 1;
	if (in_bounds(curr))
	{
		if (str[curr.y][curr.x] == '#')
			return (1);
	}
	return (0);
}

int	check_up(t_pos curr, char **str)
{
	curr.y = curr.y + 1;
	if (in_bounds(curr))
	{
		if (str[curr.y][curr.x] == '#')
			return (1);
	}
	return (0);
}
