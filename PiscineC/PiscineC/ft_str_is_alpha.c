/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 13:43:38 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/21 14:06:57 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
    if (*str == '\0')
        return (1);
    else
        while (*str != '\0')
        {
            if (*str >= 'a' && *str <= 'z')
            {
                str++;
                continue;
            }
            else if (*str >= 'A' && *str <= 'Z')
            {
                str++;
                continue;
            }
            else
                return (0);
        }
    return (1);
}
