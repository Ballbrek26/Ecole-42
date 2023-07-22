/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonal <aonal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:00:05 by aonal             #+#    #+#             */
/*   Updated: 2023/05/23 12:14:06 by aonal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
#include <fcntl.h>

int main()
{
     int fd= open("/Users/ahmet/Desktop/test.txt",O_CREAT | O_WRONLY);
	 ft_putstr_fd("Merhaba 42 Kocaeli",fd);
}
*/
