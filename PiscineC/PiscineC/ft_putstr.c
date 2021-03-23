/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:44:35 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/22 14:31:08 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
    int		counter;
    char	c;

    counter = 0;
    while (str[counter] != '\0')
    {
        c = str[counter];
        write(1, &c, 1);
        counter++;
    }
}
