/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:44:50 by ndorofey          #+#    #+#             */
/*   Updated: 2024/09/26 22:59:06 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper (int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
int	main (void)
{
	printf ("esta es la funcion: c\n", ft_toupper("c"));
	printf ("esta es la funcion: c\n", toupper("C"));
		return (0);
}
