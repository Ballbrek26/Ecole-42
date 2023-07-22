/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonal <aonal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:00:15 by aonal             #+#    #+#             */
/*   Updated: 2023/05/23 12:00:17 by aonal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	z;

	z = ft_strlen(s);
	while (z >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		z--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "merhabaikocaeli";
	printf("%s", ft_strchr(str, 'i'));
}
*/