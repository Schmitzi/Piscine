/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:27:36 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/04/22 14:49:35 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    print_char(char h, char t, char u)
{
        write(1, &h, 1);
        write(1, &t, 1);
        write(1, &u, 1);
        write(1, ", ", 2);
        if (h == '7' && t == '8' && u == '9')
        {
                write(1, "\b", 2);
                write(1, "\b", 2);
        }
}

void    ft_print_comb(void)
{
        char    h;
        char    t;
        char    u;

        h = '0';
        t = '1';
        u = '2';
        while (h <= '7' || t <= '8' || u <= '9')
        {
                print_char(h, t, u);
                if (u != '9')
                        ++u;
                else if (t != '8')
                {
                        ++t;
                        u = t + 1;
                }
                else
                {
                        ++h;
                        t = h + 1;
                        u = t + 1;
                }
        }
}

