/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_common.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:36:54 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2023/07/03 16:38:45 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COMMON_H
# define FT_COMMON_H

# include <stddef.h>
# include <stdbool.h>

typedef bool	t_err;

// memory
void	ft_common_memcpy(
			void *dest,
			const void *source,
			size_t size);

// string
size_t	ft_common_strlen(
			const char *str);
bool	ft_common_str_eq(
			const char *a,
			const char *b);
bool	ft_common_starts_with(
			const char *self,
			const char *starts,
			size_t *out);
t_err	ft_common_strdup(
			const char *src,
			char **out);
t_err	ft_common_strndup(
			const char *src,
			size_t length,
			char **out);
bool	ft_common_strchr(
			const char *str,
			char c,
			size_t *out);

#endif
