/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:34:21 by passef            #+#    #+#             */
/*   Updated: 2018/01/08 21:12:00 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"

void		handle_base(t_env *e)
{
	int len;
	len = ft_strlen(e->base_str);
	
	if (ft_isdigit(e->base_str[len]))
	{
		e->base = e->base_str[len];
		printf("%d", e->base);
	}
	else
		printf("Incompatible base %s", e->op);
}