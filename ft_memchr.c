/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:42:37 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/24 22:47:30 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p1;
	unsigned char	p2;
	size_t			i;

	i = 0;
	p1 = (unsigned char *)s;
	p2 = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (i <= n - 1)
	{
		if (p1[i] == p2)
			return (p1 + i);
		i++;
	}
	return (NULL);
}