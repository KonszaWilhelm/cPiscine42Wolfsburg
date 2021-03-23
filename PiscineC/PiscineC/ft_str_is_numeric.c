/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:59:22 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/19 09:19:17 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
    if (*str == '\0')
        return (1);
    else
        while (*str != '\0')
        {
            if (*str >= '0' && *str <= '9')
            {
                str++;
                continue;
            }
            else
                return (0);
        }
    return (1);
}
