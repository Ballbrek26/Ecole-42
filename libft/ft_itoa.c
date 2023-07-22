/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonal <aonal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 12:53:19 by aonal             #+#    #+#             */
/*   Updated: 2022/12/26 12:53:23 by aonal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_digits(int n)
{
	size_t	count;

	count = 0;
	if (n < 0 || n == 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		slen;
	const char	*digits;

	digits = "0123456789";
	slen = len_digits(n);
	str = (char *)malloc(sizeof(char) * (slen + 1));
	if (!str)
		return (NULL);
	str[slen] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n)
	{
		if (n > 0)
			str[--slen] = digits[n % 10];
		else
			str[--slen] = digits[n % 10 * (-1)];
		n /= 10;
	}
	return (str);
}
