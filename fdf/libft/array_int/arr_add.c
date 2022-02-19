/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagirdem <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:01:58 by cagirdem          #+#    #+#             */
/*   Updated: 2022/02/12 19:02:03 by cagirdem         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_int.h"

void	arr_add(int **arr, int index, int nbr)
{
	int		*new;

	if (index <= *ARR_LEN && index >= 0)
	{
		new = (int *)malloc(sizeof(int) * (*ARR_LEN + 4));
		arr_copy(new, *arr);
		new[0]++;
		arr_set(new, index, nbr);
		while (++index <= *ARR_LEN)
			arr_set(new, index, (*arr)[index]);
		free(*arr);
		*arr = new;
	}
}
