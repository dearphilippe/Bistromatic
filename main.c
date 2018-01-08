/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:12:42 by passef            #+#    #+#             */
/*   Updated: 2018/01/08 13:39:33 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"
#include <stdio.h>

int main (void)
{
    char *line;
    // struct t_env e;
    
    get_next_line(0, &line);
    
    printf("%s", line);
    
    /*
    if (ac == 2)
    {
        int i;
        i = 0;
        
        if (!ft_isdigit(av[1][i]))
            return (0);

        if (av[1][i] == '+')
        {
            if (av[1][i])
            i++;
        }
    } */
    return (0);
}