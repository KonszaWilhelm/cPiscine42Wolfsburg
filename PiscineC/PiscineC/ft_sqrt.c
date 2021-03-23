 /* ************************************************************************** */
 /*                                                                            */
 /*                                                        :::      ::::::::   */
 /*   ft_sqrt.c                                          :+:      :+:    :+:   */
 /*                                                    +:+ +:+         +:+     */
 /*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
 /*                                                +#+#+#+#+#+   +#+           */
 /*   Created: 2021/02/25 11:21:30 by wprisaca          #+#    #+#             */
 /*   Updated: 2021/02/25 23:03:16 by wprisaca         ###   ########.fr       */
 /*                                                                            */
 /* ************************************************************************** */

 int	ft_sqrt(int nb)
 {
    int i;

    i = 1;
    if (nb < 0)
        return (0);
    if (nb == 1)
        return (1);
    while (i < nb && i < 46341)
    {
        if ((i * i) == nb)
        return (i);
        i++;
    }
    return (0);
}
