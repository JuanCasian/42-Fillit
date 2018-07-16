/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conections.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 20:54:00 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 21:12:14 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

static int	in_bounds(pos curr)
{
	if (curr.x >= 0 && curr.x <= 3)
		if (curr.y >= 0 && curr.y <= 3)
			return (1);
	return (0);
}

static int check_left(pos curr, char **str)
{
	curr.x = curr.x - 1;
	if (in_bounds(curr))
	{
		if (str[curr.y][curr.x] == '#')
			return (1);
	}
	return (0);
}

static int check_right(pos curr, char **str)
{
	curr.x = curr.x + 1;
	if (in_bounds(curr))
	{
		if (str[curr.y][curr.x] == '#')
			return (1);
	}
	return (0);
}

static int check_down(pos curr, char **str)
{
	curr.y = curr.y - 1;
	if (in_bounds(curr))
	{
		if (str[curr.y][curr.x] == '#')
			return (1);
	}
	return (0);
}

static int check_up(pos curr, char **str)
{
	curr.y = curr.y + 1;
	if (in_bounds(curr))
	{
		if (str[curr.y][curr.x] == '#')
			return (1);
	}
	return (0);
}

int		check_conections(pos curr, char **str)
{
	int n_conections;

	n_conections = 0;
	n_conections += check_up(curr, str);
	n_conections += check_down(curr, str);
	n_conections += check_right(curr, str);
	n_conections += check_left(curr, str);
	return (n_conections);

}
