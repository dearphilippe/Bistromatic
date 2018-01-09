/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:19:18 by passef            #+#    #+#             */
/*   Updated: 2018/01/08 19:08:56 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"

void		parsing(t_env *e, char *line)
{
	int i;
	int j;
	i = 0;
	j = 0;
	
	while(line[i] != 0)
	{
		if(line[i] == '\'')
		{
			i++;
			while (line[i] != '\'')
			{
				e->op[j] = line[i];
				i++;
				j++;
			}
		}
		i++;
	}
	e->op[j] = '\0';
	/*
	e->sign == '+' ? add(*n1, *n2) : 0;
	e->sign == '-' ? subs(*n1, *n2) : 0;
	e->sign == '*' ? mult(*n1, *n2) : 0;
	e->sign == '/' ? division(*n1, *n2) : 0;
	e->sign == '%' ? mod(*n1, *n2) : 0;
	*/
}
