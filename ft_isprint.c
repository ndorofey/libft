/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:11:54 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/28 20:21:01 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
	if (c >= 32 && c<= 126)
		return (1);
	return (0);
}
/*int main (void)
{
	printf ("Esta es la funcion real:%i\n", ft_isprint (' '));
	return (0);
}*/