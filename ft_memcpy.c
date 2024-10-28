/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:06:18 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/23 23:17:45 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	unsigned char	*n_dst;
	unsigned char	*n_src;
	size_t			i;

	i = 0;
	n_dst = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	if (!n_dst && !n_src && n == 0)
		return (0);
	while (i <= n - 1)
	{
		n_dst[i] = n_src[i];
		i++;
	}
	return (n_dst);
}