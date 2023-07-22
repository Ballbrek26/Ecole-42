/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonal <aonal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:59:47 by aonal             #+#    #+#             */
/*   Updated: 2023/05/23 12:14:20 by aonal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>

int main()
{
 	int fd = open("/Users/ahmet/Desktop/test.txt",O_CREAT |  O_WRONLY);
 	ft_putendl_fd("Merhaba 42 Kocaeli",fd);
}*/
