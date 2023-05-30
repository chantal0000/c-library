/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:44:27 by chbuerge          #+#    #+#             */
/*   Updated: 2023/05/30 14:26:00 by chbuerge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

static int	ft_size_words(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **arr, int j)
{
	while (j < 0)
	{
		free(arr[j]);
		j--;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**arr;
	size_t	word;
	size_t	size;

	i = 0;
	j = -1;
	word = ft_count_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (word + 1));
	if (arr == NULL)
		return (NULL);
	while (j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_size_words(s, c, i);
		if (!(arr[j] = ft_substr(s, i, size)))
		{
			ft_free(arr, j);
			return (NULL);
		}
		i += size;
		j++;
	}
	arr[j] = 0;
	return (arr);
}
/*
#include <stdio.h>
#include <stdlib.h>


// Test the ft_split function
int main(void) {
    char const *s = "Hello,World,Split,Example";
    char **result = ft_split(s, ',');
    
    if (result == NULL) {
        printf("Error: Failed to split the string.\n");
        return 1;
    }
    
    // Print the split strings
    int i = 0;
    while (result[i] != NULL) {
        printf("%s\n", result[i]);
        i++;
    }
    
    // Free the memory allocated by ft_split
    i = 0;
    while (result[i] != NULL) {
        free(result[i]);
        i++;
    }
    free(result);
    
    return 0;
}*/
