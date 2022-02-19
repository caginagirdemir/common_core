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

#include "libft.h"
#define INT_MAX 2147483647
#define INT_MIN -2147483648

int		ft_isinteger(char *nbr)
{
	long num;

	if (!nbr || ft_strlen(nbr) > 11)
		return (0);
	num = ft_atoi_long(nbr);
	return (num <= (long)INT_MAX && num >= (long)INT_MIN);
}
