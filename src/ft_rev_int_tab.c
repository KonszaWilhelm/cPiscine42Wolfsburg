/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:40:19 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/17 20:59:49 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
    int counter;
    int temp;

    counter = 0;
    while (size > counter)
    {
        temp = tab[size];
        tab[size] = tab[counter];
        tab[counter] = temp;
        size--;
        counter++;
    }
}
