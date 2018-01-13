/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:19:18 by passef            #+#    #+#             */
/*   Updated: 2018/01/12 16:08:53 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"

int		parsing(t_env *e)
{
	int i;

	i = 0;
	if (!(validate_input(e)))
		return (0);
	while (e->input[i])
	{
		if (ft_strchr(e->base_str, e->input[i]))
			//push_stack(e->input[i]);
		i++;
	}
	if (!(e->input[i] && ft_strchr(e->base_str, e->input[i])))
	{
		ft_putstr("syntax error");
		return (0);
	}
	handle_base(e);
	return (1);
}

int		do_op(int n, char express, int n2)
{
	if (express == '+')
		return (n + n2);
	if (express == '-')
		return (n - n2);
	if (express == '*')
		return (n * n2);
	if (express == '/')
		return (n / n2);
	if (express == '%')
		return (n % n2);
	return (0);
}

/*
1.  While there are tokens to be read: /
2.        Read a token /
3.        If it's a number add it to queue /
4.        If it's an operator
5.               While there's an operator on the top of the stack with greater precedence:
6.                       Pop operators from the stack onto the output queue
7.               Push the current operator onto the stack
8.        If it's a left bracket push it onto the stack
9.        If it's a right bracket 
10.            While there's not a left bracket at the top of the stack:
11.                     Pop operators from the stack onto the output queue.
12.             Pop the left bracket from the stack and discard it
13. While there's operators on the stack, pop them to the queue
*/