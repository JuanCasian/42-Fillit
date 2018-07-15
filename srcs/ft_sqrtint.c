/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrtint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 13:02:46 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 13:20:11 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	ft_sqrtint(int number)
{
	int ret;
	int tmp;

	ret = 0;
	tmp = 0;
	if (number == 1 || number == 0)
		return (0);
	while (tmp < number)
	{
		ret++;
		tmp = ret * ret;
	}
	return (ret);
}
