/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 15:24:52 by syamada           #+#    #+#             */
/*   Updated: 2018/07/15 17:59:41 by syamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

static int	is_validsquare(char **str)
{
	int		i;
	int		j;
	int		block;

	i = 0;
	block = 0;
	printf("%s\n", str[i]);
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (check_block((char **)str, i, j))
			{
				block++;
				j++;
			}
			else if (str[i][j] == '.')
				j++;
			else
				return (0);
		}
	}
	if (block != 4)
		return (0);
	return (1);
}

int		validate_input(char ***str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!is_validsquare(str[i]))
			return (0);
		i++;
	}
	return (1);
}
