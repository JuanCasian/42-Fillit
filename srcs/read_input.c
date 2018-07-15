/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:35:09 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 15:56:51 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	read_input(int fd)
{
	char	*input_str;
	int		n_blocks;
	char	***str;

	input_str = ft_filetostr(fd);
	if (!(n_blocks = num_of_square(input_str)))
	{
		ft_putendl_fd("error", 2);
		exit(EXIT_FAILURE);
	}
	if (!(str = cvt_threedim(input_str, n_blocks)))
	{
		ft_putendl_fd("error", 2);
		exit(EXIT_FAILURE);
	}
}
