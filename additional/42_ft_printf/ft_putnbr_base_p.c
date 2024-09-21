/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:01:55 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/09/20 23:50:35 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_p(long n, char *base, int lenbase)
{
	unsigned long	nbr;
	unsigned int	baselen;
	int				len;

	nbr = n;
	len = 0;
	baselen = lenbase;
	if (baselen == 0)
		baselen = ft_strlen_int(base);
	if (nbr > (baselen - 1))
	{
		len = len + ft_putnbr_base_p (nbr / baselen, base, baselen);
		nbr = nbr % baselen;
	}
	ft_putchar(base[nbr]);
	len++;
	return (len);
}
/**********************************DESCRIPCION**********************************
La función 'ft_putnbr_base_p' es una modificación de la función 
'ft_putnbr_base' diseñada específicamente para manejar punteros. La principal 
diferencia es que 'ft_putnbr_base_p' convierte el número largo 'n' que recibe 
en un número largo sin signo 'nbr'. Esto se hace para manejar correctamente los 
números negativos, ya que los números largos sin signo pueden representar 
valores más grandes que los números largos con signo. De esta manera, la 
función puede imprimir correctamente direcciones de memoria, que son valores 
sin signo.

La función comienza convirtiendo el número largo 'n' a un número largo sin 
signo 'nbr'. Esto se hace para manejar correctamente los números negativos, ya 
que los números largos sin signo pueden representar valores más grandes que los 
números largos con signo. También inicializa la variable 'len' a 0, que se 
utiliza para llevar la cuenta de la longitud de la cadena que se ha impreso, y 
establece 'baselen' igual a 'lenbase'.

Si 'baselen' es 0, la función calcula la longitud de la base llamando a la 
función 'ft_strlen_int' con 'base' como argumento.

A continuación, si 'nbr' es mayor que 'baselen' - 1, la función se llama a sí 
misma recursivamente con 'nbr' dividido por 'baselen' como el nuevo número a 
imprimir. Esto es para manejar los dígitos del número que están a la izquierda 
del dígito actual. Luego, 'nbr' se actualiza al módulo de 'nbr' y 'baselen', 
que es el dígito actual del número.

Después de eso, la función imprime el dígito actual del número llamando a 
'ft_putchar' con el carácter en la posición 'nbr' de la base. Luego, incrementa 
'len' en 1.

Finalmente, después de que se ha procesado todo el número, la función devuelve 
la longitud total de la cadena que se ha impreso.
*******************************************************************************/