/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 09:25:07 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/19 09:39:59 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
            else
                return (0);
        }
    return (1);
}
