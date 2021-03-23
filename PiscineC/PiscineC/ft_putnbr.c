 /* ************************************************************************** */
 /*                                                                            */
 /*                                                        :::      ::::::::   */
 /*   ft_putnbr.c                                        :+:      :+:    :+:   */
 /*                                                    +:+ +:+         +:+     */
 /*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
 /*                                                +#+#+#+#+#+   +#+           */
 /*   Created: 2021/02/22 14:37:38 by wprisaca          #+#    #+#             */
 /*   Updated: 2021/02/23 09:09:30 by wprisaca         ###   ########.fr       */
 /*                                                                            */
 /* ************************************************************************** */

 #include <unistd.h>

 int		number_of_digits(int nb)
 {
    int		counter;

    counter = 0;
    while (nb != 0)
    {
        nb /= 10;
        counter++;
    }
    return (counter);
}

void	is_positive(int nb)
{
    int		arr[number_of_digits(nb)];
    int		i;
    char	c;

    i = 0;
    while (nb > 0)
    {
        arr[i] = (nb % 10);
        nb /= 10;
        i++;
    }
    i--;
    while (i >= 0)
    {
        c = (arr[i] + '0');
        write(1, &c, 1);
        i--;
    }
}

void	is_negative(int nb)
{
    int		arr[number_of_digits(nb)];
    int		i;
    char	c;
    long	m;

    i = 0;
    if (nb == -2147483648)
        m = 2147483648;
    else
        m = -nb;
    while (m > 0)
    {
        arr[i] = (m % 10);
        m /= 10;
        i++;
    }
    i--;
    while (i >= 0)
    {
        c = (arr[i] + '0');
        write(1, &c, 1);
        i--;
    }
}

void	ft_putnbr(int nb)
{
    if (nb < 0)
    {
        write(1, "-", 1);
        is_negative(nb);
    }
    else if (nb == 0)
        write(1, "0", 1);
    else
        is_positive(nb);
}
