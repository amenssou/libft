/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:55:28 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/30 20:38:14 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_strtrimlen(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
			{
				i++;
				j = -1;
			}
			j++;
		}
		break ;
	}
	return (i);
}

static int	ft_strtrimlen2(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
			{
				i--;
				j = -1;
			}
			j++;
		}
		break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	int		j;
	char	*c;
	int		k;

	i = ft_strtrimlen(s1, set);
	j = ft_strtrimlen2(s1, set);
	if (i > j)
		len = 0;
	else
		len = j - i + 1;
	c = malloc(sizeof(char) * (len + 1));
	if (!c)
		return (NULL);
	k = 0;
	while (k < len)
	{
		c[k] = s1[i + k];
		k++;
	}
	c[k] = '\0';
	return (c);
}
/*
#include <stdio.h>
int main()
{
	char *c = ft_strtrim("    ", " ");
	printf("%s", c);
}*/
