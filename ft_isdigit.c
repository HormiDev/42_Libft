/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:32:10 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/10 13:06:59 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}
/*
#include <unistd.h>
#include <ctype.h>

int main()
{
	char a = 48 + ft_isdigit('a');
	write(1, &a, 1);
	a = 48 + isdigit('a');
	write(1, &a, 1);
}
*/
