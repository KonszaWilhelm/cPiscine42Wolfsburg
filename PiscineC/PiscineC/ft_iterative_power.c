/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:51:43 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/25 15:46:47 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
    int temp;

    temp = nb;
    if (nb == 0 && power == 0)
        return (1);
    else if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    while (power > 1)
    {
        nb *= temp;
        power--;
    }
    return (nb);
}
