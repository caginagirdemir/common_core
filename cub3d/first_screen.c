/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_screen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagirdem <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 07:16:29 by cagirdem          #+#    #+#             */
/*   Updated: 2022/05/06 07:16:33 by cagirdem         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	drop_player(t_data *img, int x, int y, float angle)
{
		int size_x;
		int size_y;

		size_x = x + 20;
		size_y = y + 20;

		while(x < size_x)
		{
			while(y < size_y)
			{
				my_mlx_pixel_put(img, x, y, 0x00FF00);
				y++;
			}
			y -= 20;
			x++;
		}
        
        draw_line_with_angle(x-10, y+10, angle, img);
}


void printf_grid(t_data *img)
{
	int	y;
	int x;
	int i;

	x = 0;
	y = 0 + 64;
	i = 0;

	while(y < 64*8)
	{
		x = 0;
		while(x < 64*8)
		{
			my_mlx_pixel_put(img, x, y, 0xFFFF00);
			x++;
		}
		y += 64;
	}

	y = 0;
	x = 0 + 64;
	while(x < 64*8)
	{
		y = 0;
		while(y < 64*8)
		{
			my_mlx_pixel_put(img, x, y, 0xFFFF00);
			y++;
		}
		x+=64;
	}
}

void printf_background_2d(t_data *img, int *map)
{
	int	count_Val;
	int	x;
	int	y;
	int	i;
	
	i = -1;
	x = 0;
	y = 0;
	count_Val = 0;

	while(map[++i])
	{
		while(x < 64 + 64 * ((i)%8))
		{
			if(map[i] == 1)
			{
				count_Val = y + 64;
				while(y < count_Val)
				{
					my_mlx_pixel_put(img, x, y, 0xFF0000);
					y++;
				}
			}
			else if(map[i] == 2)
			{
				count_Val = y + 64;
				while(y < count_Val)
				{
					my_mlx_pixel_put(img, x, y, 0x000000);
					y++;
				}
			}
			y = y - 64;
			x++;
		}
		if((i+1)%8 == 0 && i != 0)
		{
			x = 0;
			y += 64;
		}			
	}
}
