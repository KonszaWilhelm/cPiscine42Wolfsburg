/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:21:36 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/25 14:03:06 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
    if (nb == 0)
        return (1);
    else if (nb >= 1)
        return (nb * ft_recursive_factorial(nb - 1));
    return (0);
}
