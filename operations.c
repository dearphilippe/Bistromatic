/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 17:42:13 by passef            #+#    #+#             */
/*   Updated: 2018/01/09 06:52:35 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"

int	ft_add(int *s, int *s2)
{
	return (*s + *s2);
}

int	ft_subs(int *s, int *s2)
{
	return (*s - *s2);
}

int	ft_mult(int *s, int *s2)
{
	return (*s * *s2);
}

int	ft_division(int *s, int *s2)
{
	return (*s / *s2);
}

int	ft_mod(int *s, int *s2)
{
	return (*s % *s2);
}
