/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:55:38 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/04/22 14:56:10 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
