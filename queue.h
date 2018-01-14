/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 17:10:10 by passef            #+#    #+#             */
/*   Updated: 2018/01/12 17:10:10 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_H
#define QUEUE_H

#include "bistromatic.h"

typedef struct	s_queueItem
{
	char		*c;
	struct		queueItem *next;
}				t_queueItem, *queue;

static t_queueItem *first = NULL;
static t_queueItem *last = NULL;
static int nb_items = 0;

int				is_empty_queue(void);
int				queue_length(void);
int				queue_first(void);
int				queue_last(void);
void			print_queue(void);
void			push_queue(char *c);
void			pop_queue(void);
void			clear_queue(void);

#endif