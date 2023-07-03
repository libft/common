/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_common_strdup.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:41:16 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2023/07/03 16:41:24 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_common.h"

#include <stdlib.h>

t_err	ft_common_strdup(const char *src, char **out)
{
	size_t		length;
	char		*result;
	const char	*tmp;
	char		*temp;

	length = 0;
	tmp = src;
	while (*tmp)
	{
		tmp++;
		length++;
	}
	result = malloc(length + 1);
	if (!result)
		return (true);
	tmp = src;
	temp = result;
	while (*tmp)
		*temp++ = *tmp++;
	*temp = '\0';
	*out = result;
	return (false);
}
