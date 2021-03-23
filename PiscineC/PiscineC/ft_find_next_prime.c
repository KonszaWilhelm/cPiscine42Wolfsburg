/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:36:08 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/25 20:45:21 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i <= nb / 2)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int	ft_find_next_prime(int nb)
{
    long	i;
    int		counter;

    i = nb;
    counter = 0;
    if (nb <= 2)
        return (2);
    if (ft_is_prime(nb) == 1)
        return (nb);
    else
        while (!(ft_is_prime(i + counter) == 1))
    counter++;
    return (i + counter);
}
