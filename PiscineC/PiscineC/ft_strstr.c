 /* ************************************************************************** */
 /*                                                                            */
 /*                                                        :::      ::::::::   */
 /*   ft_strstr.c                                        :+:      :+:    :+:   */
 /*                                                    +:+ +:+         +:+     */
 /*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
 /*                                                +#+#+#+#+#+   +#+           */
 /*   Created: 2021/02/22 10:39:28 by wprisaca          #+#    #+#             */
 /*   Updated: 2021/02/22 22:59:49 by wprisaca         ###   ########.fr       */
 /*                                                                            */
 /* ************************************************************************** */

 char	*ft_strstr(char *str, char *to_find)
 {
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] == to_find[j])
        {
            j++;
            if (to_find[j] == '\0')
            {
            return (&str[i]);
            }
        }
        i++;
    }
    return (0);
}
