/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 02:11:43 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/20 21:51:49 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

#define HEXA_MAX "0123456789ABCDEF"
#define HEXA_MIN "0123456789abcdef"
#define DECIMAL "0123456789"

static int	ft_conversion_2(int fd, const char *format, int *i, va_list varg)
{
	if (ft_strncmp_p(format, "%u", 2) == 0)
		return (*i += 1, ft_dprintf_nbr_base_u(fd, va_arg(varg, unsigned int),
				DECIMAL));
	else if (ft_strncmp_p(format, "%d", 2) == 0
		|| ft_strncmp_p(format, "%i", 2) == 0)
		return (*i += 1, ft_dprintf_nbr_base(fd, va_arg(varg, int), DECIMAL));
	else if (ft_strncmp_p(format, "%x", 2) == 0)
		return (*i += 1, ft_dprintf_nbr_base_u(fd, va_arg(varg, unsigned int),
				HEXA_MIN));
	else if (ft_strncmp_p(format, "%X", 2) == 0)
		return (*i += 1, ft_dprintf_nbr_base_u(fd, va_arg(varg, unsigned int),
				HEXA_MAX));
	else if (ft_strncmp_p(format, "%%", 2) == 0)
		return (*i += 1, write(fd, "%", 1));
	else if (ft_strncmp_p(format, "%ld", 3) == 0)
		return (*i += 2, ft_dprintf_nbr_base(fd, va_arg(varg, long), DECIMAL));
	else
		return (0);
}

static int	ft_conversion(int fd, const char *format, int *i, va_list varg)
{
	void	*p;
	int		c;

	if (ft_strncmp_p(format, "%c", 2) == 0)
	{
		c = va_arg(varg, int);
		return (*i += 1, write(fd, &c, 1));
	}
	else if (ft_strncmp_p(format, "%s", 2) == 0)
		return (*i += 1, ft_dprintf_str(fd, va_arg(varg, char *)));
	else if (ft_strncmp_p(format, "%p", 2) == 0)
	{
		p = va_arg(varg, void *);
		if (p == 0)
			return (*i += 1, write(fd, "(nil)", 6));
		else
		{
			if (write(fd, "0x", 2) < 0)
				return (-1);
			return (*i += 1, ft_dprintf_nbr_base_u(fd, (unsigned long)p,
					HEXA_MIN) + 2);
		}
	}
	else
		return (ft_conversion_2(fd, format, i, varg));
}

int	ft_dprintf(int fd, const char *format, ...)
{
	int		len;
	va_list	varg;
	int		i;
	int		ret;

	i = 0;
	len = 0;
	ret = 0;
	va_start(varg, format);
	while (format[i])
	{
		if (format[i] == '%')
			ret = ft_conversion(fd, format + i, &i, varg);
		else
			ret = write(fd, &format[i], 1);
		if (ret == -1)
			return (-1);
		len += ret;
		i++;
	}
	va_end(varg);
	return (len);
}
