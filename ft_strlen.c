/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:35:01 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/11/01 20:58:26 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
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