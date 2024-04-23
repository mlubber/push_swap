/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mlubbers <mlubbers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 15:55:33 by mlubbers      #+#    #+#                 */
/*   Updated: 2023/10/22 14:57:37 by mlubbers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*alloc;

	len = (ft_strlen(str) + 1);
	alloc = (char *)malloc(len * sizeof(char));
	if (alloc == NULL)
		return (NULL);
	ft_memcpy(alloc, str, len);
	return (alloc);
}
