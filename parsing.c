/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:19:18 by passef            #+#    #+#             */
/*   Updated: 2018/01/13 23:38:19 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"

int		is_predecence(char c, stack st)
{
	int i;

	i = 0;
	if (c == st->c)
		return (0);
}

int		parsing(t_env *e)
{
	int				i;
	s_stackToken	*st;

	i = 0;
	s_stackToken *st = new_stack();
	if (!(validate_input(e)))
		return (0);
	if (!(e->input[i] || ft_strchr(e->base_str, e->input[i])))
	{
		ft_putstr("syntax error");
		e->status = 0;
		return (0);
	}
	while (e->input[i])
	{
		if (ft_isdigit(e->input[i]))
			push_queue(&e->input[i]);
		if (ft_isops(e->input[i]))
		{
			while (!is_empty_stack(st) && st->c)
			// While there's an operator on the top of the stack with greater precedence:
			{		
				// Pop operators from the stack onto the output queue
				st = st->next;
			}
			push_stack(e, st, &e->input[i]);
		}
		if (e->input[i] == '(')
			push_stack(e, st, &e->input[i]);
		if (e->input[i] == ')')
		{
		/*	while ()
			While there's not a left bracket at the top of the stack:
				si je ne retrouve pas de paranthese ouverte c'est qu'il y a une erreur de synatxe, arreter le programme et sortir.
                     Pop operators from the stack onto the output queue.
             Pop the left bracket from the stack and discard it			
		*/
		}

		/*While there's operators on the stack, pop them to the queue */
		i++;
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
