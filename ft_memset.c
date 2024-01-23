/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:01:56 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/16 20:06:29 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cont;
	unsigned char	*str;

	cont = 0;
	str = (unsigned char *)b;
	while (cont < len)
	{
		str[cont] = c;
		cont++;
	}
	return (b);
}
/*
#include <string.h>

int main()
{
    char str[11] = "Hola mundo";
    printf("%s\n", str);
    memset(str, '$', 6);
    printf("%s\n", str);
	strcpy(str, "Hola mundo");
	printf("%s\n", str);
	ft_memset(str, '#', 7);
	printf("%s\n", str);
    return 0;
}*/
