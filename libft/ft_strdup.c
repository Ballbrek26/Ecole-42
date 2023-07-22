/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonal <aonal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 12:55:27 by aonal             #+#    #+#             */
/*   Updated: 2022/12/26 12:55:31 by aonal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		a;
	char	*dest;

	dest = (char *)malloc(sizeof (char) * (ft_strlen(s1) + 1));
	if (dest == NULL)
		return (NULL);
	a = 0;
	while (s1[a])
	{
		dest[a] = s1[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
