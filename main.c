/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:12:42 by passef            #+#    #+#             */
/*   Updated: 2018/01/13 18:37:18 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"

static void		init(t_env *e)
{
	e->express[0] = '+';
	e->express[1] = '-';
	e->express[2] = '%';
	e->express[3] = '/';
	e->express[4] = '*';
	e->express[5] = '\0';
	e->base_inp = 0;
	e->len_inp = 0;
	ft_bzero(e->input, e->len_inp);
}

/*

** get lenght of stdin (operations)
** get line of operations and store it
** rent a space for store the operations
** check if the lenght match

*/

int			get_data(t_env *e, char ***av)
{
	char	*line;

	e->len_inp = ft_atoi(av[0][2]);
	get_next_line(0, &line);
	if (!(e->input = malloc(sizeof(e->input) * ft_strlen(line) + 1)))
		return (0);
	ft_strcpy(e->input, line);
	if (ft_strlen(e->input) != e->len_inp)
	{
		ft_putstr("syntax error");
		return (0);
	}
	return (1);
}

/*
** char		echo[3] = {"3+6"};
*/

/**
** Si la base est inferieur a 2
**/

int				main(int ac, char **av)
{
	t_env		e;
	int i;
	
	i = 1;
	if (ac == 3)
	{
		init(&e);
		if (!get_data(&e, &av))
			return (0);
		if (!parsing(&e))
		{
			ft_putstr("syntax error");
			return (0);
		}
		if (e.status == 0)
		{
			ft_putstr("syntax error");
			return (0);
		}
		else
			printf("%s\n", e.result);
		free(e.input);
	}
	else
	{
		new_stack();
	}
		//ft_putstr("syntax error");

	return (0);
}
