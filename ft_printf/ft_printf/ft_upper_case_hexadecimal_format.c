/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper_case_hexadecimal_format.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagirdem <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:23:48 by cagirdem          #+#    #+#             */
/*   Updated: 2022/01/20 15:36:30 by cagirdem         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upper_case_hexadecimal_format(unsigned int value)
{
	int		i;
	char	*str;

	str = ft_itoa_base(value, HEXADECIMAL_U_BASE);
	i = ft_string_format(str);
	free(str);
	return (i);
}
