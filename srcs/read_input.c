/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:35:09 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 19:05:25 by syamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	read_input(int fd)
{
	char	*input_str;
	int		n_blocks;
	char	***str;
	t_tetri	*tetris;

	input_str = ft_filetostr(fd);
	if (!(n_blocks = num_of_square(input_str)) && n_blocks > 26)
		put_error();
	if (!(str = cvt_threedim(input_str, n_blocks)))
		put_error();
	if (!(tetris = fill_structure(str, n_blocks)))
		put_error();
	int i = 0;
	int	j = 0;
	while (tetris[i].is_end != 1)
	{
		j = 0;
		while (j < 4)
		{
			printf("x: %d\n", tetris[i].pieces[j].x);
			printf("y: %d\n", tetris[i].pieces[j].y);
			j++;
		}
		printf("name: %c\n", tetris[i].name);
		i++;
	}
}
