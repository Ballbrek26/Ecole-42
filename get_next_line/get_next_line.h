/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aonal <aonal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:34:00 by aonal             #+#    #+#             */
/*   Updated: 2023/02/03 13:34:02 by aonal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

char	*get_next_line(int fd);
char	*ft_get_str(int fd, char *str);

int		ft_strchr(char *str, int c);
int		ft_strlen(char *str);
char	*ft_strjoin(char *str, char *temp_str);
char	*ft_get_line(char *str);
char	*ft_get_new_str(char *str);

#endif
