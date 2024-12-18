/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:56:37 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/28 20:21:59 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
unsigned char	*p1;
unsigned char	*p2;
size_t			i;

i = 0;
p1 = (unsigned char *) s1;
p2 = (unsigned char *) s2;
while (i <= n - 1)
{
	if (p1[i] != p2[i])
		return (p1[i] - p1[i]);
	i++;
}
return (0);
}