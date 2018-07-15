/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:34:58 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/14 21:08:26 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define	BUFSIZE 4096

#include <fcntl.h>

void	fillit(int fd);
char	*input_tostr(int fd);
void	read_input(int fd);
void	*ft_remalloc(void *ptr, size_t size, size_t curr);

#endif