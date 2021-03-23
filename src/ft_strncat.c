 /* ************************************************************************** */
 /*                                                                            */
 /*                                                        :::      ::::::::   */
 /*   ft_strncat.c                                       :+:      :+:    :+:   */
 /*                                                    +:+ +:+         +:+     */
 /*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
 /*                                                +#+#+#+#+#+   +#+           */
 /*   Created: 2021/02/22 10:11:00 by wprisaca          #+#    #+#             */
 /*   Updated: 2021/02/22 10:37:44 by wprisaca         ###   ########.fr       */
 /*                                                                            */
 /* ************************************************************************** */

 char	*ft_strncat(char *dest, char *src, unsigned int nb)
 {
    unsigned int i;
    unsigned int j;

    i = 0;
    while (dest[i] != '\0')
        i++;
    j = 0;
    while (src[j] != '\0' && j < nb)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}
