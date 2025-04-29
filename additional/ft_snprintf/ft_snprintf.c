/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_snprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 21:05:52 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/29 21:19:46 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_snprintf.h"

#define HEXA_MAX "0123456789ABCDEF"
#define HEXA_MIN "0123456789abcdef"
#define DECIMAL "0123456789"

static int	ft_conversion_2(char *str, int l_s[2], const char *format,
				va_list varg)
{
	if (ft_strncmp_p(format, "%x", 2) == 0)
		return (ft_snprintf_nbr_base_u(str, l_s, va_arg(varg, unsigned int),
				HEXA_MIN), 1);
	else if (ft_strncmp_p(format, "%X", 2) == 0)
		return (ft_snprintf_nbr_base_u(str, l_s, va_arg(varg, unsigned int),
				HEXA_MAX), 1);
	else if (ft_strncmp_p(format, "%%", 2) == 0)
		return (ft_snprintf_char(str, &l_s[0], '%'), 1);
	else if (ft_strncmp_p(format, "%ld", 3) == 0)
		return (ft_snprintf_nbr_base(str, l_s, va_arg(varg, long), DECIMAL), 2);
	else
		return (1);
}

static int	ft_conversion(char *str, int l_s[2], const char *format,
				va_list varg)
{
	void	*p;

	if (ft_strncmp_p(format, "%c", 2) == 0)
		return (ft_snprintf_char(str, &l_s[0], va_arg(varg, int)), 1);
	else if (ft_strncmp_p(format, "%s", 2) == 0)
		return (ft_snprintf_str(str, l_s, va_arg(varg, char *)), 1);
	else if (ft_strncmp_p(format, "%p", 2) == 0)
	{
		p = va_arg(varg, void *);
		if (p == 0)
			ft_snprintf_str(str, l_s, "(nil)");
		else
		{
			ft_snprintf_str(str, l_s, "0x");
			ft_snprintf_nbr_base_u(str, l_s, (unsigned long)p, HEXA_MIN);
		}
		return (1);
	}
	else if (ft_strncmp_p(format, "%u", 2) == 0)
		return (ft_snprintf_nbr_base(str, l_s, va_arg(varg, unsigned int),
				DECIMAL), 1);
	else if (ft_strncmp_p(format, "%d", 2) == 0
		|| ft_strncmp_p(format, "%i", 2) == 0)
		return (ft_snprintf_nbr_base(str, l_s, va_arg(varg, int), DECIMAL), 1);
	return (ft_conversion_2(str, l_s, format, varg));
}

/**
 * @brief `ft_snprintf` es una función que escribe en el string `str` bajo el
 * formato especificado en `format`, con un límite máximo de `size` caracteres.
 * La función es similar a `snprintf` de la librería estándar de C. Asegura que
 * no se escriban más de `size - 1` caracteres en el buffer, dejando espacio
 * para el carácter nulo de terminación. La función devuelve el número total de
 * caracteres que se habrían escrito si no hubiera límite de tamaño, excluyendo
 * el carácter nulo de terminación.
 * 
 * el formato de `format` puede contener los siguientes funciona igual que
 * `printf`:
 * - `%c` para escribir un caracter.
 * - `%s` para escribir un string.
 * - `%p` para escribir un puntero.
 * - `%d` o `%i` para escribir un número entero.
 * - `%u` para escribir un número entero sin signo.
 * - `%x` o `%X` para escribir un número entero en hexadecimal.
 * - `%%` para escribir el caracter `%`.
 * 
 * Además, `ft_sprintf` soporta los siguientes modificadores:
 * - `%ld` para escribir un número entero largo.
 * @param str El buffer donde se escribirá el texto formateado.
 * @param size El tamaño máximo del buffer, incluyendo el carácter nulo.
 * @param format El formato especificado para la salida.
 * @return El número total de caracteres que se habrían escrito si no hubiera
 * límite de tamaño (puede ser mayor o igual a `size`).
 */
int	ft_snprintf(char *str, size_t size, const char *format, ...)
{
	int		i;
	int		len_size[2];
	va_list	varg;

	if (size > 2147483647)
		len_size[1] = 2147483647;
	else
		len_size[1] = (int)size;
	va_start(varg, format);
	i = 0;
	len_size[0] = 0;
	while (format[i] != 0 && len_size[0] < len_size[1] - 1)
	{
		if (format[i] == '%')
			i += ft_conversion(str, len_size, &format[i], varg);
		else
		{
			str[len_size[0]] = format[i];
			len_size[0]++;
		}
		i++;
	}
	str[len_size[0]] = 0;
	va_end(varg);
	return (len_size[0]);
}
