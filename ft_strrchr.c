/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:32:29 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/28 18:26:07 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int		i;
	char	*ptr;
	char	new;

	i = 0;
	new = (char) c;
	ptr = 0;
	while (s[i])
	{
		if (s[i] == new)
			ptr = (char *)s + i;
		i ++;
	}
	return (ptr);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_strrchr("patas", 'a'));
	return (0);
}