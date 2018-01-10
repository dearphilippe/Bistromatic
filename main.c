/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:12:42 by passef            #+#    #+#             */
/*   Updated: 2018/01/10 11:56:00 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"

static void		init(t_env *e)
{
	e->base_inp = 0;
	e->len_inp = 0;
	ft_bzero(e->input, e->len_inp);
}

void			get_data(t_env *e, char *line, char ***av)
{
	ft_memcpy(e->input, ft_extract_fd(line, '\"'), ft_strlen(line));
	e->len_inp = ft_atoi(av[0][2]);
	if (!(e->input = malloc(sizeof(e->input) * e->len_inp + 1)))
		exit(EXIT_FAILURE);
	read(0, e->input, e->len_inp);
}

int				main(int ac, char **av)
{
	t_env		e;
	char		*line;
	// char		echo[3] = {"3+6"};

	if (ac == 3)
	{
		if (!(get_next_line(0, &line) == 0))
		{
			ft_putstr("syntax error");
			return (0);
		}
		init(&e);
		get_data(&e, line ,&av);
		parsing(&e, e.input);

		printf("%s", e.input);
		printf("%d", e.len_inp);
		printf("%d", e.base_inp);

		free(e.input);
	}
	ft_putchar('\n');
	return (0);
}
