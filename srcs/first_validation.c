/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 18:09:50 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 22:28:05 by syamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

static int	is_accepted_char(char c)
{
	if (c == '.')
		return (1);
	if (c == '#')
		return (1);
	if (c == '\n')
		return (1);
	return (0);
}

static int	validate_chars(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(is_accepted_char(str[i])))
			return (0);
		i++;
	}
	return (1);
}

static int	check_box(char **str)
{
	int i;
	int j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			if ((**str != '.' && **str != '#') || !(**str))
				return (0);
			i++;
			*str += 1;
		}
		if ((**str != '\n') || !(**str))
			return (0);
		*str += 1;
		j++;
	}
	return (1);
}

static int	validate_format(char *str)
{
	int n_blocks;

	n_blocks = 0;
	if (!str)
		return (0);
	while (str)
	{
		if (!(check_box(&str)))
			return (0);
		n_blocks++;
		if (!(*str))
			return (n_blocks);
		if (*str == '\n')
		{
			if ((str[1] != '.' && str[1] != '#') || !(str[1]))
				return (0);
			else
				str += 1;
		}
	}
	return (0);
}

int			first_validation(char *str)
{
	int	n_blocks;

	if (!(validate_chars(str)))
		return (0);
	if (!(n_blocks = validate_format(str)))
		return (0);
	return (n_blocks);
}
