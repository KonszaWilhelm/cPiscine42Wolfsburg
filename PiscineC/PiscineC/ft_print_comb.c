/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 21:48:02 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/17 10:02:36 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
    int i;
    int j;
    int k;

    i = '0';
    while (i <= '7')
    {
        j = i + 1;
        while (j <= '8')
        {
            k = j + 1;
            while (k <= '9')
            {
                write(1, &i, 1);
                write(1, &j, 1);
                write(1, &k, 1);
                if (i == '7')
                    return ;
                write(1, ", ", 2);
                k++;
            }
            j++;
        }
        i++;
    }
}
