/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 16:13:02 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/14 19:01:55 by syamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putendl(argv[1]);
	}
	else
	{
		ft_putendl("usage: ./fillit path_to_map_file");
	}
	return (0);
}
