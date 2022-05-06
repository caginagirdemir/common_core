/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refresh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagirdem <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:29:46 by cagirdem          #+#    #+#             */
/*   Updated: 2022/05/06 10:29:48 by cagirdem         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

// float   refresh_pespective(int angle, t_window *data)
// {

// }

void	refresh(t_window *data, int *map, int direction)
{
    printf("refresh\n");
	mlx_clear_window(data->mlx, data->mlx_win);
	//d->i.i = mlx_new_image(d->mlx_ptr, WIN_WIDTH, WIN_HEIGHT);
	//d->i.addr = mlx_get_data_addr(d->i.i, &d->i.bpp, &d->i.l_l, &d->i.end);
	//draw_all_window(d);

    data->img.img = mlx_new_image(data->mlx, 64*8, 64*8);
    data->img.addr = mlx_get_data_addr(data->img.img, &data->img.bits_per_pixel, &data->img.line_length,&data->img.endian);
    printf_background_2d(&data->img, map);
    printf_grid(&data->img);

    //    1(w)
    //2(a)0(s)3(d)

    //t_line line;    
    if(direction == 1)
    {
        data->player_position_x += cos(data->perspective_angle*3.14/180)*20;
        data->player_position_y += sin(data->perspective_angle*3.14/180)*20;
    }
    else if(direction == 0)
    {
        data->player_position_y -= sin(data->perspective_angle*3.14/180)*20;
        data->player_position_x -= cos(data->perspective_angle*3.14/180)*20;
    }
    else if(direction == 2)
        data->perspective_angle -= 5;
    else if(direction == 3)
        data->perspective_angle += 5;

    float rx, ry, a_tan, xo, yo;

    if(data->perspective_angle*3.14/180 < 3.14)
        printf("down\n");
    else if (data->perspective_angle*3.14/180 == 3.14 || data->perspective_angle*3.14/180 == 0)
        printf("equal\n");
    else
    {
        printf("up\n");
        a_tan = -1/tan(data->perspective_angle*3.14/180);
        ry =(((int)data->player_position_y>>6)<<6)-0.0001;
        rx = (((int)data->player_position_y-ry))*a_tan+data->player_position_y;
        yo = -64;
        xo = -yo*a_tan;
        printf("rx->%f\n", rx);
        printf("ry->%f\n", ry);
        
        // line.x = data->player_position_x;
        // line.y = data->player_position_y;
        // line.x1 = rx;
        // line.y1 = ry;
        // draw_l<<<ine(&line,data);
    } 

    
    drop_player(&data->img, data->player_position_x, data->player_position_y,data->perspective_angle);
    mlx_put_image_to_window(data->mlx, data->mlx_win, data->img.img, 0, 0);
}