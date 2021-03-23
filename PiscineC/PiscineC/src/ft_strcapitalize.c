/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprisaca <wprisaca@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 13:44:31 by wprisaca          #+#    #+#             */
/*   Updated: 2021/02/21 17:25:25 by wprisaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}

char	*ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    ft_strlowcase(str);
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (i == 0)
                str[i] -= 32;
            else if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
                i++;
            else if (str[i - 1] >= '0' && str[i - 1] <= '9')
                i++;
            else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
                i++;
            else
                str[i] -= 32;
        }
        i++;
    }
    return (str);
}
