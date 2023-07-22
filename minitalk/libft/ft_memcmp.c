/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonal <aonal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:59:18 by aonal             #+#    #+#             */
/*   Updated: 2023/05/23 12:14:49 by aonal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)dst)[i] != ((unsigned char *)src)[i])
			return (((unsigned char *)dst)[i] - ((unsigned char *)src)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char *s1 = "ahmete";
	char *s2 = "ahmet";

	printf("%d" , ft_memcmp(s1, s2, 10));
}*/
