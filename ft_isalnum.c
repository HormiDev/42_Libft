/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:29:33 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/10 13:07:24 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <unistd.h>
#include <ctype.h>

int main()
{
	char a = 48 + ft_isalnum('.');
	write(1, &a, 1);
	a = 48 + isalnum('.');
	write(1, &a, 1);
}*/
