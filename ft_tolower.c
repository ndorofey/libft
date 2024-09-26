/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 23:11:03 by ndorofey          #+#    #+#             */
/*   Updated: 2024/09/26 23:20:47 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower (int C)
{
	if (C >= 'A' && C <= 'Z')
		C += 32;
	return (C);
}
int main (void)
{
	printf ("esta es la funcion: %C\n", ft_tolower ('C'));
	printf ("esta es la funcion real: %C\n", tolower ('C'));
	return (0);
}	
