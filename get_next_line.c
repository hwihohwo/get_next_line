/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghwc <seonghwc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:48:54 by seonghwc          #+#    #+#             */
/*   Updated: 2022/11/25 19:17:52 by seonghwc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	free_all(char *buffer, char **static_string)
{
	free(buffer);
	free(*static_string);
	*static_string = NULL;
}

char	*get_next_line(int fd)
{
	static char	*static_string;
	char		*buffer;
	char		*temp;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (buffer == NULL)
		return (NULL);
	buffer[BUFFER_SIZE] = '\0';
	if (read_and_check(fd, buffer, &static_string) == -1)
	{
		free_all(buffer, &static_string);
		return (NULL);
	}
	temp = ft_strdup_gnl(static_string);
	if (temp == NULL)
	{
		free_all(buffer, &static_string);
		return (NULL);
	}
	static_string = cut_and_free(static_string);
	free (buffer);
	return (temp);
}
