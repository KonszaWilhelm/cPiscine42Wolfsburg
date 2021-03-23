/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:12:10 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/21 14:08:52 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 32 || str[i] > 126)
            return (0);
        i++;
    }
    return (1);
}
