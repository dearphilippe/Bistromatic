/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 21:59:46 by passef            #+#    #+#             */
/*   Updated: 2018/01/11 21:59:46 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

#include "bistromatic.h"

typedef struct			s_stackToken
{
	char *c;
	struct s_stackToken *next;
}						s_stackToken, *stack;

stack					new_stack(void);
int						is_empty_stack(stack st);
void					print_stack(stack st);
stack					push_stack(t_env *e, stack st, char *c);
stack					pop_stack(stack st);
int						top_stack(stack st);
int						stack_length(stack st);
stack					clear_stack(stack st);

#endif