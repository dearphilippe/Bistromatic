/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:12:42 by passef            #+#    #+#             */
/*   Updated: 2018/01/08 16:33:59 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"

static void		set_zero(t_env *e)
{
	e->base = 0;
	e->len_op = 0;
	ft_bzero(e->str, e->len_op);
	e->sign = 0;
}

void			store_data(t_env *e, char *line, char ***av)
{
	// printf("Store data : %s", av[1][0]);
	e->str = malloc(sizeof(e->str) * e->len_op + 1);
	e->base = ft_atoi(av[0][2]);
}

int				main (int ac, char **av)
{
	if (ac == 3)
	{
		int		i;
		int		j;
		t_env	e;
		char	*line;
		char	op[e.len_op];
		
		i = 0;
		j = 0;
		e.len_op = ft_atoi(av[2]);
		
		e.str = op;
		set_zero(&e);
		if (get_next_line(0, &line) == 0)
			return (0);
		while(line[i])
		{
			if(line[i] == '"')
			{
				i++;
				while (line[i] != '"')
				{
					op[j] = line[i];
					i++;
				}
				i++;
			}
			i++;
		}
		printf("%s", op);
		store_data(&e, line, &av);
		// printf("%d", e.base);
		// handle_base(e);
		// printf("%s", e.str);
		free(e.str);
	}
	
	printf("Main : %s", av[0]);
	printf("\n");
	return (0);
}