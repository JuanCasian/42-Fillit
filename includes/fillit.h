/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:34:58 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 15:15:08 by syamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define	BUFSIZE 4096
# include <fcntl.h>

int		num_of_square(char *str);
void	fillit(int fd);
char	*ft_filetostr(int fd);
void	read_input(int fd);
void	*ft_remalloc(void *ptr, size_t size, size_t curr);
char	***cvt_threedim(char *input, int n_blocks);
int		ft_sqrtint(int number);

#endif
