/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:35:34 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/05/10 11:19:55 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}

int	r_len(int size, char **strs, int size_sep)
{
	int i;
	int len;

	i = -1;
	len = size_sep * -1;
	while (++i < size)
		len += size_sep + ft_strlen(strs[i]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;
	int		len;

	if (size == 0)
	{
		res = (char*)malloc(1);
		return (res);
	}
	len = r_len(size, strs, ft_strlen(sep));
	i = -1;
	if ((res = malloc(sizeof(char) * (len + 1))) == NULL)
		return (0);
	while (++i < size)
	{
		res = ft_strcpy(res, strs[i]);
		if (i + 1 < size)
			res = ft_strcpy(res, sep);
	}
	*res = '\0';
	return (res - len);
}

#include <stdio.h>
int main(void)
{
        char    *tab[] = {"This", "is", "a", "joined", "string"};
        char    *sep = " ";
        int     size = sizeof(tab) / sizeof(tab[0]);
        char    *joined = ft_strjoin(size, tab, sep);
        printf("%s\n", joined);
        free(joined);
    return 0;
}

