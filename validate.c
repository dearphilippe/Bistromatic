/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:54:33 by passef            #+#    #+#             */
/*   Updated: 2018/01/12 01:40:07 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"

int		chk_operand(t_env *e)
{
	int i;
	int j;
	int res;

	i = 0;
	j = 0;
	res = 0;
	while (e->input[i])
	{
		if (!(ft_strchr(e->base_str, e->input[i])))
		{
			printf("Un caractere de l'input n'est pas present dans la base");
			return (0);
		}
		i++;
	}
	return (1);
}

int		chk_next_handle(t_env *e, int i)
{
	if (e->input[i] == ')')
	{
		if (e->input[i + 1] == '%' || e->input[i + 1] == '/' || e->input[i + 1] == ')')
			return (1);
	}
	if (e->input[i + 1] == '+' || e->input[i + 1] == '-' || e->input[i + 1] == '(')
		return (1);
	if (ft_strchr(e->base_str, e->input[i + 1]))
		return (1);
	return (0);
}

int		chk_next_i(t_env *e)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (e->input[i])
	{
		if (e->input[i] == '+')
			chk_next_handle(e, i) ? res = 1 : 0;
		if (e->input[i] == '-')
			chk_next_handle(e, i) ? res = 1 : 0;
		if (e->input[i] == '*')
			chk_next_handle(e, i) ? res = 1 : 0;
		if (e->input[i] == '/')
			chk_next_handle(e, i) ? res = 1 : 0;
		if (e->input[i] == '(')
			chk_next_handle(e, i) ? res = 1 : 0;
		if (e->input[i] == ')')
			chk_next_handle(e, i) ? res = 1 : 0;
		if (ft_strchr(e->base_str, e->input[i]))
			chk_next_handle(e, i) ? res = 1 : 0;
	}
	return (res);
}

int		validate_input(t_env *e)
{
	int res;

	res = 0;
	if (!chk_operand(e))
		return (0);
	if (!(e->input[ft_strlen(e->input) - 1] == ')'))
		return (0);
	if (!chk_next_i(e))
		return (0);
	return (res);
}
