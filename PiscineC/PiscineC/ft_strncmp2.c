/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 09:48:21 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/24 12:47:22 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if (s1[i] == s2[i])
            i++;
        else
            return (s1[i] - s2[i]);
    }
    return (0);
}
