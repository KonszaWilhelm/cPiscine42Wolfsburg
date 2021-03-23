/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:04:24 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/21 18:54:54 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        ++i;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
