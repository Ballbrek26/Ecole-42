/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonal <aonal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:01:10 by aonal             #+#    #+#             */
/*   Updated: 2023/05/23 12:01:12 by aonal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	p;

	p = ft_strlen(s);
	while (p >= 0)
	{
		if (s[p] == (char)c)
			return ((char *)&s[p]);
		p--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	char d[] = "esin";
	printf("%s", ft_strrchr(d, 'i'));
}
*/