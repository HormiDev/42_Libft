/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:15:46 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/23 12:15:56 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	cont;

	cont = 0;
	while (str[cont] != 0)
	{
		cont++;
	}
	return (cont);
}
/*
#include <string.h>

int main() {
    char str1[] = "";
    char str2[] = "Hola, mundo";
    char str3[] = "¿Como andamos?";

    printf("'%s' %lu %lu\n", str1, strlen(str1), ft_strlen(str1));
    printf("'%s' %lu %lu\n", str2, strlen(str2), ft_strlen(str2));
    printf("'%s' %lu %lu\n", str3, strlen(str3), ft_strlen(str3));

    return 0;
}
*/