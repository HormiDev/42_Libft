/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:04:42 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/11 18:30:38 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c = c - 32);
	return (c);
}
/*
#include <unistd.h>
#include <ctype.h>

int main(){
	char a = ft_toupper('b');
	write(1, &a, 1);
	a = toupper('b');
	write(1, &a, 1);
}*/
