/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:32:50 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/18 17:13:40 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			cont;

	str = (unsigned char *)s;
	cont = 0;
	while (cont < n)
	{
		if (str[cont] == c)
			return (str + cont);
		cont++;
	}
	return (0);
}
/*
#include <string.h>

int main() {
    const char str[] = "Erase una vez...";
    const char str2[] = "Erase una vez...";
    const char ch = 'u';
    char *ret;

    ret = memchr(str, ch, strlen(str));
    printf("Con memchr el caracter |%c| esta en - |%s|\n", ch, ret);

    ret = ft_memchr(str2, ch, strlen(str));
    printf("Con ft_memchr el caracter |%c| esta en - |%s|\n", ch, ret);

    return 0;
}*/
