/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:31:34 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/11 18:37:48 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int a)
{
	if (a >= 65 && a <= 90)
		return (a = a + 32);
	return (a);
}
/*
#include <unistd.h>
#include <ctype.h>

int main(){
	char a = ft_tolower('A');
	write(1, &a, 1);
	a = tolower('A');
	write(1, &a, 1);
}
*/
