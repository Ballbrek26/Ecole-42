/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonal <aonal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:00:35 by aonal             #+#    #+#             */
/*   Updated: 2023/05/23 12:15:24 by aonal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen((char *)src);
	i = 0;
	if (n <= d)
	{
		return (n + s);
	}
	while (src[i] != '\0' && d + i + 1 < n)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}
/*
#include <stdio.h>

int	main()
{
	char *z = "kocaeli";
	char *f = "merhaba";
	printf("%zu\n", ft_strlcat(z, f, 1));
}*/
