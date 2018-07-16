/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:34:58 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 20:56:37 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define	BUFSIZE 4096
# include <fcntl.h>
#include <stdio.h>

typedef struct	position
{
	int			x;
	int			y;
}				pos;

typedef struct	tetrispieces
{
	pos			pieces[4];
	char		name;
}				tetri;

int				first_validation(char *str);
void			fillit(int fd);
char			*ft_filetostr(int fd);
void			read_input(int fd);
void			*ft_remalloc(void *ptr, size_t size, size_t curr);
char			***cvt_threedim(char *input, int n_blocks);
int				ft_sqrtint(int number);
void			put_error(void);
tetri			*fill_structure(char ***tstr, int n_blocks);
int				second_validation(char ***str, int n_pieces);
int				check_conections(pos curr, char **str);

#endif
