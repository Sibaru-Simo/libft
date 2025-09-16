/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidna_7 <who??@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:06:15 by sidna_7           #+#    #+#             */
/*   Updated: 2025/09/16 15:06:21 by sidna_7          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t  word_count(const char *s, char c)
{
    size_t i = 0;
    size_t count = 0;

    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i] && s[i] != c)
            count++;
        while (s[i] && s[i] != c)
            i++;
    }
    return count;
}

static char *word_dup(const char *s, size_t start, size_t end)
{
    size_t len = end - start;
    char *word = malloc(len + 1);
    size_t i;

    if (!word)
        return NULL;
    for (i = 0; i < len; i++)
        word[i] = s[start + i];
    word[i] = '\0';
    return word;
}

static void free_words(char **arr, size_t n)
{
    size_t i;
    for (i = 0; i < n; i++)
        free(arr[i]);
    free(arr);
}

char **ft_split(const char *s, char c)
{
    char **arr;
    size_t i = 0, j = 0, start;
    size_t wc;

    if (!s)
        return NULL;

    wc = word_count(s, c);
    arr = malloc((wc + 1) * sizeof(char *));
    if (!arr)
        return NULL;

    while (s[i] && j < wc)
    {
        while (s[i] && s[i] == c)
            i++;
        start = i;
        while (s[i] && s[i] != c)
            i++;
        arr[j] = word_dup(s, start, i);
        if (!arr[j])
        {
            free_words(arr, j);
            return NULL;
        }
        j++;
    }
    arr[j] = NULL;
    return arr;
}
