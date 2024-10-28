/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:22:55 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/28 18:23:41 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char new;
	int	i;

	i = 0;
	new = (char)c;
	while (*s)
	{
		if (*s == new)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	printf("%c\n", ft_strchr("hola", 'o'));
	return (0);
}*/
