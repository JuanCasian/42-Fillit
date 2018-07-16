/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conections.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 20:54:00 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 22:38:49 by syamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int			check_conections(t_pos curr, char **str)
{
	int n_conections;

	n_conections = 0;
	n_conections += check_up(curr, str);
	n_conections += check_down(curr, str);
	n_conections += check_right(curr, str);
	n_conections += check_left(curr, str);
	return (n_conections);
}
