 /* ************************************************************************** */
 /*                                                                            */
 /*                                                        :::      ::::::::   */
 /*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
 /*                                                    +:+ +:+         +:+     */
 /*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
 /*                                                +#+#+#+#+#+   +#+           */
 /*   Created: 2021/02/24 09:36:43 by wprisaca          #+#    #+#             */
 /*   Updated: 2021/02/24 20:45:21 by wprisaca         ###   ########.fr       */
 /*                                                                            */
 /* ************************************************************************** */

 int	ft_iterative_factorial(int nb)
 {
    int i;
    int product;

    product = 1;
    i = 1;
    if (nb < 0)
        return (0);
    while (i <= nb)
    {
        product *= i;
        i++;
    }
    return (product);
}
