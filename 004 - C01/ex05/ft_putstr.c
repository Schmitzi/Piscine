/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:23:40 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/04/26 09:52:47 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (0 != *str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char	*str;

	str = "dfsfsefd\n";
	ft_putstr(str);
	return (0);
}