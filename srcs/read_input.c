/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:35:09 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/17 16:55:15 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

t_tetri	*read_input(int fd)
{
	char	*input_str;
	int		n_blocks;
	char	***str;
	t_tetri	*tetris;

	input_str = ft_filetostr(fd);
	if (!(n_blocks = first_validation(input_str)))
		put_error();
	if (n_blocks > 26)
		put_error();
	if (!(str = cvt_threedim(input_str, n_blocks)))
		put_error();
	if (!(second_validation(str, n_blocks)))
		put_error();
	if (!(tetris = fill_structure(str, n_blocks)))
		put_error();
	return (tetris);
}
