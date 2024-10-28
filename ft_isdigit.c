/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:12:03 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/28 20:20:39 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*int main (void)
{
	printf ("Esta es nuestra funcion:%i\n",ft_isdigit ('2'));
	printf ("Esta es nuestra fucnion:%i\n", isdigit ('2'));
	return (0);
}*/