/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:34:58 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/16 18:50:27 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFSIZE 4096
# include <fcntl.h>
#include <stdio.h>

typedef struct	s_position
{
	int	x;
	int	y;
}				t_pos;

typedef struct	s_tetrispieces
{
	t_pos	*pieces;
	char	name;
	int		is_end;
}				t_tetri;

int				first_validation(char *str);
void			fillit(int fd);
char			*ft_filetostr(int fd);
t_tetri			*read_input(int fd);
void			*ft_remalloc(void *ptr, size_t size, size_t curr);
char			***cvt_threedim(char *input, int n_blocks);
int				ft_sqrtint(int number);
void			put_error(void);
t_tetri			*fill_structure(char ***tstr, int n_blocks);
int				second_validation(char ***str, int n_pieces);
int				check_conections(t_pos curr, char **str);
int				in_bounds(t_pos curr);
int				check_left(t_pos curr, char **str);
int				check_right(t_pos curr, char **str);
int				check_up(t_pos curr, char **str);
int				check_down(t_pos curr, char **str);
void			print_board(char **board);
char			**create_board(int size);
char			**solve(char **board, int boardsize, t_tetri *tetris);

#endif
