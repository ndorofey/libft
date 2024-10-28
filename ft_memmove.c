/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:28:52 by ndorofey          #+#    #+#             */
/*   Updated: 2024/10/28 19:36:30 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;

    if (dest < src)
    {
        i = 0;
        while(i <= n - 1)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    else if (dest > src)
    {
        while (n > 0)
        {
            ((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
            n--;
        }
    }
    return (dest);
}