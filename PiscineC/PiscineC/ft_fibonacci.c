/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 21:53:35 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/25 11:18:38 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index <= 1 && index >= 0)
        return (index);
    else
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
