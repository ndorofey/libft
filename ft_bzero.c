/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndorofey <ndorofey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:58:56 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/28 20:21:59 by ndorofey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
	return;
	ft_memset (s, '\0', n);
}
/*#include <stdio.h>

int main() {
    char str[10] = "Hello";
    printf("Before ft_bzero: '%s'\n", str);
    ft_bzero(str, 5);
    printf("After ft_bzero: '%s'\n", str); // Debería mostrar cinco caracteres nulos
    return 0;
}*/
