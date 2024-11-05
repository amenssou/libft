/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenssou <amenssou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 22:58:28 by amenssou          #+#    #+#             */
/*   Updated: 2024/10/30 20:41:57 by amenssou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*ft_alloc(int n)
{
	char	*s;
	int		len;

	len = ft_len(n);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	return (s);
}

static char	*ft_nbmin(char *s)
{
	int	i;

	i = 0;
	while (i <= 11)
	{
		s[i] = "-2147483648"[i];
		i++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	len = ft_len(n);
	s = ft_alloc(n);
	if (s == NULL)
		return (NULL);
	if (n == -2147483648)
		return (s = ft_nbmin(s), s);
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	s[len] = '\0';
	while (n / 10 != 0)
	{
		s[--len] = (n % 10) + '0';
		n = n / 10;
	}
	len--;
	s[len] = n + '0';
	return (s);
}
/*
#include <stdio.h>
int main ()
{
	char *s = ft_itoa(-2147483647);
	printf("%s", s);
}*/
