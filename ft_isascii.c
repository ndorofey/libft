/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:12:11 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/28 20:21:59 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 00 && c <= 127)
		return (1);
	return (0);
}
/*int	main (void)
{
	printf ("Esta es la funcion real:%i\n", ft_isacii ('E'));
	return (0);
}*/