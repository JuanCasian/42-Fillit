/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 16:13:02 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 13:24:17 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	main(int argc, char **argv)
{
	int		fd;

	if (argc == 3)
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
		{
			ft_putendl_fd("Incorrect file path", 2);
			return (-1);
		}
		else
		{
			fillit(fd);
		}
	}
	else
		ft_putendl("usage: ./fillit path_to_map_file");
	return (0);
}
