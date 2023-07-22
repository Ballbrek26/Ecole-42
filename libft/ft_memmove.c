/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonal <aonal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 12:54:26 by aonal             #+#    #+#             */
/*   Updated: 2022/12/26 12:54:30 by aonal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*src2;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	src2 = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (src2 < dest)
		while (++i <= len)
			dest[len - i] = src2[len - i];
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
