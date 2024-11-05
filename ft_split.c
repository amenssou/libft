/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:27:52 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/30 19:35:06 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	nb_words(char const *s, char c) // compte nb de mots
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			len ++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (len);
}

static void	free_tab(char **tab, int j)
{
	while (j > 0)
		free(tab[--j]);
	free(tab);
}

static int	tab_all(char **tab, char const *s, char c, int i)
{
	int	len;
	int	j;	

	j = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i])
			{
				i++;
				len++;
			}
			tab[j] = malloc(sizeof(char) * (len + 1));
			if (tab[j] == NULL)
				return (free_tab(tab, j), 0);
			j++;
		}
	}
	return (1);
}

static void	add_str(char **tab, char const *s, char c) // remplir tab**
{
	int	i;
	int	j;
	int	k;	

	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			while (s[i] != c && s[i])
			{
				tab[j][k] = s[i];
				i++;
				k++;
			}
			tab[j][k] = '\0';
			j++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	int		len;
	char	**tab;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	len = nb_words(s, c);
	tab = malloc (sizeof(char *) * (len + 1));
	if (tab == NULL)
		return (NULL);
	if (!tab_all(tab, s, c, i))
		return (NULL);
	add_str (tab, s, c);
	tab[len] = NULL;
	return (tab);
}
/*
#include <stdio.h>
int main()
{
	int i = 0;
	char *s = "sal uv";
	char **tab = ft_split("sal uvfdv",' ');
	//while (i < nb_words(s, ' '))
	//{
//	printf("%s \n", tab[i]);
	//i++;
	//}
	free(tab[0]);
	free(tab[1]);
	free(tab[2]);
	free(tab);
	system("leaks a.out");
	return 0;
}
*/
