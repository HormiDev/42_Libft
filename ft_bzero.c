/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:19:59 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/18 16:12:42 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	cont;
	char	*str;

	str = (char *)s;
	cont = 0;
	while (cont < n)
	{
		str[cont] = 0;
		cont++;
	}
}
/*
#include <strings.h>

int main() {
    char str[50] = "Hola Mundo!";
	char str2[50] = "Hola mundo!";
    printf("Antes de bzero: %s\n", str);

    bzero(str, sizeof(str));
    printf("Después de bzero: %s\n", str);

	printf("Antes de ft_bzero: %s\n", str2);
	ft_bzero(str2, sizeof(str2));
	printf("Despues de ft_bzero: %s\n", str2);

    return 0;
}*/
