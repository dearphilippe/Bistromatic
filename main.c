/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:12:42 by passef            #+#    #+#             */
/*   Updated: 2018/01/08 17:13:58 by passef           ###   ########.fr       */
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
/*
void			store_data(t_env *e, char *line, char ***av)
{
	// printf("Store data : %s", av[1][0]);
	e->str = malloc(sizeof(e->str) * e->len_op + 1);
	e->base = ft_atoi(av[0][2]);
}
*/
int				main (int ac, char **av)
{
	if (ac == 3)
	{
		int		i;
		int		j;
		t_env	e;
		e.len_op = ft_atoi(av[2]);
		e.base = ft_atoi(av[1]);
		char	line[e.len_op];
		char	op[e.len_op + 1];
		
		ft_strcpy(line, "echo '3+6'");
		i = 0;
		j = 0;
		
		e.str = op;
		set_zero(&e);
		//if (get_next_line(0, &line))
		//	return (0);
		while(line[i] != 0)
		{
			if(line[i] == '\'')
			{
				i++;
				while (line[i] != '\'')
				{
					op[j] = line[i];
					i++;
					j++;
				}
			}
			i++;
		}
		op[j] = '\0';
		printf("%s", op);
		// store_data(&e, line, &av);
		// printf("%d", e.base);
		// handle_base(e);
		// printf("%s", e.str);
		free(op);
	}
	
	printf("Main : %s", av[0]);
	printf("\n");
	return (0);
}