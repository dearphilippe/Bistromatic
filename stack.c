/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 11:42:56 by passef            #+#    #+#             */
/*   Updated: 2018/01/13 16:27:32 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int is_empty_stack(stack st)
{
	if(st == NULL)
		return (1);

	return (0);
}

stack new_stack(void)
{
	return NULL;
}

stack push_stack(t_env *e, stack st, char *c)
{
	s_stackToken *token;

	token = malloc(sizeof(*token));

	if (token == NULL)
	{
		ft_putstr("syntax error.\n");
		e->status = 0;
	}

	token->c = c;
	token->next = st;

	return token;
}

stack pop_stack(stack st)
{
	s_stackToken *token;

	if (is_empty_stack(st))
		return new_stack();

	token = st->next;
	free(st);

	return token;
}

void print_stack(stack st)
{
	if (is_empty_stack(st))
	{
		printf("Rien a afficher, la Pile est vide.\n");
		return;
	}

	while (!is_empty_stack(st))
	{
		printf("[%d]\n", *st->c);
		st = st->next;
	}
}

int top_stack(stack st)
{
	if (is_empty_stack(st))
	{
		printf("Aucun sommet, la Pile est vide.\n");
		exit(EXIT_FAILURE);
	}

	return *st->c;
}

int stack_length(stack st)
{
	int length = 0;

	while (!is_empty_stack (st))
	{
		length++;
		st = st->next;
	}

	return length;
}

stack clear_stack(stack st)
{
	while (!is_empty_stack(st))
		st = pop_stack(st);

	return new_stack();
}
