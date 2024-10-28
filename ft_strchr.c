/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitadorofeychik <nikitadorofeychik@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:22:55 by nikitadorof       #+#    #+#             */
/*   Updated: 2024/10/27 23:38:18 by nikitadorof      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>

char *ft_strchr(const char *s, int c)
{
    char new;

    new = (char)c;
    while (*s)
    {
        if (*s == new)
            return (char *)s;
        s++;
    }
    if (new == '\0')
        return (char *)s;
    return (NULL);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
    char *result = ft_strchr("hola", 'o');
    if (result)
        printf("%c\n", *result);
    else
        printf("Carácter no encontrado\n");
    return (0);
}

char	ft_strchr (const char *s, int c)
{
	char new;
	int	i;

	i = 0;
	new = (char)c;
	while (*s)
	{
		if (*s == new)
			return ((char *)s);
		s++;
	}
	if (new == '\0')
		return ((char *)s);
	return (0);
}


#include <string.h>
#include <stdio.h>

int main(void)
{
	printf("%c\n", ft_strchr("hola", 'o'));
	return (0);
}