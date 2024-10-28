/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:29:30 by ndorofey          #+#    #+#             */
/*   Updated: 2024/10/28 21:57:28 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    int nbr;
    int i;
    int value;

    nbr = 0;
    value = 1;
    i = 0;
    while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            value = -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        nbr = (nbr * 10) + (nptr[i] - '0'); 
        i++;
    }
    return (nbr * value);
}
