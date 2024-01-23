/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:01:39 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/10 13:25:38 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 40 && c <= 176)
		return (1);
	return (0);
}
/*
#include <unistd.h>
#include <ctype.h>

int main()
{
	char a = 48 + ft_isprint(2);
	write(1, &a, 1);
	a = 48 + isprint(2);
	write(1, &a, 1);
}*/
