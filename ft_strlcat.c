/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:32:09 by ndorofey          #+#    #+#             */
/*   Updated: 2024/10/28 20:28:51 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  len;

    i = 0;
    j = ft_strlen(dst);
    len = ft_strlen(dst);
    while (src[i] && i < size - 1 && size > 0)
    {
        dst[j] = src[i];
        i++;
        j++;
    }
    dst[j] = '\0';
    if (size < len)
        len = size;
    return (len + ft_strlen(src));
}