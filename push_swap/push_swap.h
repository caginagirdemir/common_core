/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagirdem <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:01:02 by cagirdem          #+#    #+#             */
/*   Updated: 2022/02/09 20:05:16 by cagirdem         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>


/*
 *	Linked list defination part
 */

typedef struct s_node {
	int		value;
	struct	s_node *next;
}	t_node;

/*
 *	Stack defination part
 */

typedef struct	s_stack {
	struct s_node	*top;
}	t_stack;

/*
 * main assistance definations
 */
int		isInt(char *str);
int		ft_isdigit(int c);
int		ft_atoi(char *str);
int		*get_stack(struct s_stack *stack);
void	print_stack(struct s_stack *stack_a, struct s_stack *stack_b);
int		stack_counter(struct s_stack *stack);

/*
 * struct utils definations
 */

struct s_stack 	*init(void);
int				isEmpty(struct s_stack *stack);
void			push(struct s_stack *stack, int content);
int				pop(struct s_stack *stack);

/*
 * push_swap commands
 */
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack_1, t_stack *stack2);
void	pa(t_stack *stack_1, t_stack *stack2);
void	pb(t_stack *stack_1, t_stack *stack2);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *a, t_stack*b);

#endif
