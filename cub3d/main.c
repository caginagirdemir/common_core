/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagirdem <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2222/25/23 17:37:32 by cagirdem          #+#    #+#             */
/*   Updated: 2222/25/23 17:39:35 by cagirdem         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	mapX=8, mapY=8,mapS=64;

int map[]= {
1,1,1,1,1,1,1,1,
1,2,2,2,2,1,2,1,
1,2,2,2,2,2,2,1,
1,2,2,2,2,2,2,1,
1,2,2,2,2,2,2,1,
1,2,1,1,2,2,2,1,
1,2,2,2,2,2,2,1,
1,1,1,1,1,1,1,1,0
};

int	deal_key(int key, t_window *data)
{
	printf("key->%d\n", key);
	if(key == 53)
	{
		exit(1);
		//player_forward(&img);
	}
	else if(key == 2)
		refresh(data, map,3);
	else if(key == 13)
		refresh(data, map,1);
	else if(key == 1)
		refresh(data, map,0);
	else if(key == 0)
		refresh(data, map,2);
	return (0);
}

int	main(void)
{

	t_window *window;

	window = (t_window *)malloc(sizeof(t_window));

	window->mlx = mlx_init();
	window->mlx_win = mlx_new_window(	window->mlx , WIN_WIDTH, WIN_HEIGHT, "Hello world!");

	window->img.img = mlx_new_image(window->mlx, 64*8, 64*8);
	window->img.addr = mlx_get_data_addr(window->img.img, &window->img.bits_per_pixel, &window->img.line_length,&window->img.endian);
	window->player_position_x = 100;
	window->player_position_y = 200;
	window->perspective_angle = 180;
	printf_background_2d(&window->img, map);
	printf_grid(&window->img);
	drop_player(&window->img, window->player_position_x, window->player_position_y, window->perspective_angle);


	mlx_put_image_to_window(window->mlx, window->mlx_win, window->img.img, 0, 0);
	mlx_key_hook(window->mlx_win,deal_key, window);
	mlx_loop(window->mlx);
}