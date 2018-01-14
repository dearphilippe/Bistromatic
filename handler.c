/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:34:21 by passef            #+#    #+#             */
/*   Updated: 2018/01/11 00:38:30 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"

int			chk_char(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int			check_doublon(char *str)
{
	int		i;
	int		j;
	char	tmp[ft_strlen(str)];

	i = 0;
	j = 0;
	ft_bzero(tmp, ft_strlen(str));
	while (str[i])
	{
		if (chk_char(tmp, str[i]))
			tmp[j] = str[i];
		else
			return (0);
		i++;
		j++;
	}
	return (1);
}

int			check_brackets(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '(')
		{
			i++;
			while (s[i])
			{
				if (s[i] == ')')
					return (1);
				else
					return (0);
			}
		}
		i++;
	}
	return (0);
}

void		handle_base(t_env *e)
{
	int i;

	i = 0;
	while (ft_isprint(e->base_str[i]) && check_doublon(e->base_str))
	{
		if (e->base_str[i] == e->base_str[i + 1])
			exit(EXIT_FAILURE);
		e->base_inp++;
		i++;
	}
	check_brackets(e->base_str);
	if (e->base_str[i] != '\0')
		exit(EXIT_FAILURE);
}
