/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonal <aonal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:59:11 by aonal             #+#    #+#             */
/*   Updated: 2023/05/23 12:14:56 by aonal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)s;
	while (n--)
		if (*(temp++) == (unsigned char)c)
			return ((void *)(temp - 1));
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	char *z = "ahmet";
	printf("%s", (char *)ft_memchr(z, 'i', 7));
}*/
