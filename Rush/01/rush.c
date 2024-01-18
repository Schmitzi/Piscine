/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeiger- <mgeiger-@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:37:08 by mgeiger-          #+#    #+#             */
/*   Updated: 2023/04/29 09:37:10 by mgeiger-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int grid_prnt(int *col_up, int *col_dwn, int *row_up, int *row_dwn)
{
    int i;
    int j;
    int grid[4][4];

    i = 0;
    j = 0
    while (i < 4)
    {    
        if (col_up[i] = 4)
        {
            while(j < 4)
            {
                grid[i][j] = i + 1;
                j++;
            }
            i++;
        }
        if (col_up[i] = 1)
        {
            grid[i][0] = 4;
        }
        i++;
    }
}

int main(void)
{
    int col_up[] = {4, 3, 2, 1};
    int col_dwn[] = {1, 2, 2, 2};
    int row_left[] = {4, 3, 2, 1}
    int row_right[] = {1, 2, 2, 2};
    grid_prnt();
    return (0);
}