/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagirdem <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:58:32 by cagirdem          #+#    #+#             */
/*   Updated: 2022/02/09 20:20:29 by cagirdem         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	struct s_stack	*a;
	struct s_stack	*b;

	a = init();
	b = init();
	if (argc >= 2)
	{
		int	i;

		i = argc - 1;
		while (argv[i] && i != 0)
		{
			if (isInt(argv[i]) == 1)
			{
				write(1,"error\n",6);
				exit(0);
			}
			push(a, ft_atoi(argv[i]));
			i--;
		}
	}
	//push(b, 5);
	//push(b, 6);
	sa(a);
	pb(a,b);
	pb(a,b);
	pb(a,b);
	rr(a,b);
	rrr(a,b);
	sa(a);
	pa(a,b);
	pa(a,b);
	pa(a,b);
	print_stack(a,b);
	//print_stack(a,b);
	return (0);
}
