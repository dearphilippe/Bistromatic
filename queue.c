/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prosa <prosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 00:42:24 by prosa             #+#    #+#             */
/*   Updated: 2018/01/14 00:42:24 by prosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

int		is_empty_queue(void)
{
	if (first == NULL && last == NULL)
		return (1);

	return (0);
}

int		queue_length(void)
{
	return (nb_items);
}

int		queue_first(void)
{
	if (is_empty_queue())
		exit(1);

	return (*first->c);
}

int		queue_last(void)
{
	if (is_empty_queue())
		exit(1);

	return (*last->c);
}

void	print_queue(void)
{
	t_queueItem *tmp;

	if (is_empty_queue())
	{
		printf("Rien a afficher, la File est vide.\n");
		return ;
	}

	t_queueItem *tmp = first;

	while(tmp != NULL)
	{
		printf("[%d] ", *tmp->c);
		tmp = tmp->next;
	}
	printf("\n");
}

void	push_queue(char *c)
{
	t_queueItem *item;

	item = malloc(sizeof(*item));

	if (item == NULL)
	{
		fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}

	item->c = c;
	item->next = NULL;

	if (is_empty_queue())
	{
		first = item;
		last = item;
	}
	else
	{
		last->next = item;
		last = item;
	}

	nb_items++;
}

void	pop_queue(void)
{
	t_queueItem *tmp;

	if(is_empty_queue())
	{
		printf("Rien a retirer, la File est deja vide.\n");
		return;
	}

	t_queueItem *tmp = first;

	if (first == last)
	{
		first = NULL;
		last = NULL;
	}
	else
		first = first->next;

	free(tmp);
	nb_items--;
}

void	clear_queue(void)
{
	if (is_empty_queue())
	{
		printf("Rien a nettoyer, la File est deja vide.\n");
		return ;
	}

	while (!is_empty_queue())
		pop_queue();
}
