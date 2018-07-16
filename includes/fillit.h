/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:34:58 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 18:42:16 by syamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define	BUFSIZE 4096
# include <fcntl.h>
#include <stdio.h>

typedef struct	s_position
{
	int 		x;
	int 		y;
}				t_pos;

typedef struct	s_tetrispieces
{
	t_pos		*pieces;
	char		name;
	int			is_end;
}				t_tetri;

int		num_of_square(char *str);
void	fillit(int fd);
char	*ft_filetostr(int fd);
void	read_input(int fd);
void	*ft_remalloc(void *ptr, size_t size, size_t curr);
char	***cvt_threedim(char *input, int n_blocks);
int		ft_sqrtint(int number);
void	put_error(void);
t_tetri	*fill_structure(char ***tstr, int n_blocks);

#endif
