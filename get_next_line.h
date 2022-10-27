/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghwc <seonghwc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:41:20 by seonghwc          #+#    #+#             */
/*   Updated: 2022/10/28 01:02:00 by seonghwc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		read_and_check(int fd, char *buffer, char **static_string);
char	*ft_strjoin_gnl(char *str1, char *str2);
int		ft_strlen_gnl(char *str);
char	*ft_strdup_gnl(char *str);
char	*cut_and_free(char *static_string);

#endif