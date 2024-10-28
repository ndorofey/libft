/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:35:01 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/28 20:28:42 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen (const char *str)
{
	size_t	count;

	count = 0;
	while (str[count]!= '\0')
	{
		count++;
	}
	return (count);
}
/*int main (void)
{
	printf ("mi funcion es: %zu\n", ft_strlen("hola"));
	printf ("mi funcion real es: %lu", strlen("hola"));
	return (0);
}*/