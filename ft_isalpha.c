/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:12:16 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/28 20:20:02 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
/*int main (void)
{
	printf ("Esta es nuestra funcion:%i\n", ft_isalpha('C'));
	printf ("Esta es la funcion real:%i\n", isalpha('C'));
	return (0);
}*/