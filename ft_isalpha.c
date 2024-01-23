/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:08:57 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/10 13:13:13 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	return (0);
}
/*
#include <unistd.h>
#include <ctype.h>

int main()
{
	char a = 48 + ft_isalpha('2');
	write(1, &a, 1);
	a = 48 + isalpha('2');
	write(1, &a, 1);
}*/
