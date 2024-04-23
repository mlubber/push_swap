/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   split.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mlubbers <mlubbers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/08 14:46:53 by mlubbers      #+#    #+#                 */
/*   Updated: 2024/01/22 13:44:32 by mlubbers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	count_words(char *s, char c)
{
	int		count;
	bool	inside_word;

	count = 0;
	while (*s)
	{
		inside_word = false;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			if (!inside_word)
			{
				count++;
				inside_word = true;
			}
			s++;
		}
	}
	return (count);
}

static char	*get_next_word(char *s, char c)
{
	static int	cursor = 0;
	char		*next_word;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (s[cursor] == c)
		cursor++;
	while ((s[cursor + len] != c) && s[cursor + len])
		len++;
	next_word = malloc((size_t)len * sizeof(char) + 1);
	if (!next_word)
		return (NULL);
	while ((s[cursor] != c) && s[cursor])
		next_word[i++] = s[cursor++];
	next_word[i] = '\0';
	return (next_word);
}

char	**split(char *s, char c)
{
	int		wordcount;
	char	**array;
	int		i;

	i = 0;
	wordcount = count_words(s, c);
	if (!wordcount)
		exit(1);
	array = malloc(sizeof(char *) * (size_t)(wordcount + 2));
	if (!array)
		return (NULL);
	while (wordcount-- >= 0)
	{
		if (i == 0)
		{
			array[i] = malloc(sizeof(char));
			if (!array[i])
				return (NULL);
			array[i++][0] = '\0';
			continue ;
		}
		array[i++] = get_next_word(s, c);
	}
	array[i] = NULL;
	return (array);
}

void	free_split(char **strlist)
{
	int	i;

	i = 0;
	while (strlist[i])
	{
		free(strlist[i]);
		i++;
	}
	free(strlist);
}
