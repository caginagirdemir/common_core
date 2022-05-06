/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagirdem <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:40:13 by cagirdem          #+#    #+#             */
/*   Updated: 2022/05/03 17:40:15 by cagirdem         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <math.h>
# include "./minilibx_macos/mlx.h"
# include "libft/libft.h"
# include <fcntl.h>

# define WIN_WIDTH 64*16
# define WIN_HEIGHT 64*8

typedef struct	s_line	{
	int x;
	int	y;
	int x1;
	int y1;
}	t_line;

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef	struct s_window {
	void	*mlx;
	void	*mlx_win;
	t_data	img;
	int		win_height;
	int		win_width;
	float	player_position_x;
	float	player_position_y;
	float	perspective_angle;
}	t_window;



void 	printf_background_2d(t_data *img, int *map);
void 	printf_grid(t_data *img);
void	drop_player(t_data *img, int x, int y, float angle);


void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void	draw_line_with_angle(float x, float y, float angle, t_data *data);
void	draw_line(t_line *line, t_window *data);
int		ft_max(int a, int b);
void	refresh(t_window *data, int *map, int direction);

#endif