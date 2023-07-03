/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_common_memcpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:39:15 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2023/07/03 16:39:43 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"

void	ft_common_memcpy(void *dest, const void *source, size_t size)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dest;
	s = (const char *)source;
	i = 0;
	while (i < size)
	{
		i++;
		*d++ = *s++;
	}
}
