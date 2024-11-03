/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:06:59 by ndorofey          #+#    #+#             */
/*   Updated: 2024/10/29 21:28:05 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *str)
{
    int     i;
    char    *dst;

    i = 0;
    dst = malloc(sizeof(char) * (ft_strlen(str) +1)); 
    if(!dst)
        return (NULL);
    while(str[i])
	{
		dst[i] = str[i];
		i++;
	}
		dst[i] = '\0';
    return (dst);   
}