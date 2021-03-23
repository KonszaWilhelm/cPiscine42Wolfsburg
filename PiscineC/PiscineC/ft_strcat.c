/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:03:06 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/22 10:33:14 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0')
        i++;
    j = 0;
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
return (dest);
}
