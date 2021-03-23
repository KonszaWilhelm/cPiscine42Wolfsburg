/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 09:55:17 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/19 09:59:18 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
    if (*str == '\0')
        return (1);
    else
        while (*str != '\0')
        {
            if (*str >= 'A' && *str <= 'Z')
            {
                str++;
                continue;
            }
            else
                return (0);
        }
    return (1);
}
